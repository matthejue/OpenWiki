---
theme: gaia
paginate: true
<!-- backgroundColor: #ffffff -->
transition: fade
footer: Betriebssysteme, Tutorat 4, Gruppe 6, [juergmatth@gmail.com](juertmatth@gmail.com), Universität Freiburg Technische Fakultät
style: |
  h1 { color: #b37650; font-size: 80px; text-align: center; }
  h2 { color: #b37650; font-size: 60px; text-align: left; margin-top: 0px; margin-bottom: 0px; line-height: 0px; line-height: 60px;}
  h3 { color: #5c4c89; font-size: 40px; text-align: left; margin-top: 10px; margin-bottom: 20px; line-height: 40px;}
  h4 { color: #b37650; font-size: 20px; text-align: center; margin-top: 0px; margin-bottom: 20px; line-height: 0px; font-weight: normal; }
  h5 { color: #b38336; font-size: 30px; text-align: left; margin-top: 40px; margin-bottom: 20px; line-height: 0px; font-weight: normal; }
  a { color: #b37650; }
  strong { color: #5c4c89; }
  em { color: #b37650; }
  footer { color: #5c4c89; font-size: 20px; text-align: center; }
  ul { color: #252a2f; list-style: none; font-size: 25px; margin-bottom: 0px; }
  p { color: #252a2f; list-style: none;  font-size: 25px; text-align: center; margin-top: 0px; }
  ul li::before {
    content: "\1F784";
    color: #b37650;
    font-size: 25px;
    font-weight: bold;
    display: inline-block;
    width: 1em;
    margin-left: -1em;
  }
  section::after {
      color: #5c4c89;
      font-weight: bold;
      text-shadow: 0 0 0px #000;
  }
  code {
    background: #7f6e81;
    color: #282e33;
  }
  :root {
    --color-background: #ffffff;
    --color-foreground: #7f6e81;
    --color-highlight: #F96;
    --color-dimmed: #6a6458;
  }

---

# Tutorat 4 <!--fit-->
### Zustandsdiagramme, DMA <!--fit-->

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

# Einstieg

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

## Einstieg
### Fakeupdate
- https://fakeupdate.net/

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Korrektur

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #7b738f; -->

---

## Korrektur
### Interessantes und häufige Fehler
- überschreiben der Daten, die in der b) nach links geshiftet wurden. `OR IN1 1`, **Non-Controlling** Bit `0`
- `SUBI ACC 2` um `b1` `0` zu setzen
  - einfach `0` setzen geht nicht, weil die anderen **Flags** des **Statusregisters** erhalten bleiben sollen
- neuen 8Bitvektor dranfügen aus **Empfangsregister** `ADD IN1 1`
- LOADI DS 0 für EPROM weil dann alles da mit 0en ist bei den ersten 10 Bits
- etwas ganuer sollte es noch sein.
Aber korrekt, wenn man es weiter ausführt, mit dem MULTI Befehl
kann man quasi nen Bitshift durchführen
und die Bits an die passende Stelle shiften, z.B. für das IN1 und IN2 Register. So muss man das Register DS garnicht anrühren.
- (0b00000100 // 0b00000010 = 1)
Da ganze umgeht quasi das Datensegmentregister, indem es die über die 32Bit Register direkt die Memory Map über die Bits 31 und 30 über den Adressbus ansteuert.
Der Trick liegt darin die passenden 32Bit Konstanten in Registern IN1 und IN2 zu speichern mittels Bitshiftung durch MULTI oder laden der passenden Konstante in die Register aus dem EPROM und dann über LOADIN IN1 ACC 1 oder z.B. STOREIN IN2 ACC 1 Adressen im UART oder SRAM anzusteuern.
Da ganze umgeht quasi das Datensegmentregister, indem es die über die 32Bit Register direkt die Memory Map über die Bits 31 und 30 über den Adressbus ansteuert. (0b00000100 // 0b00000010 = 1)
- der EPROM ist READONLY -> hat keinen Stack
- andere Flags des Statusregister
- Damit tut ihr aber im letzten Durchlauf 8 0en reinshiften und geladenen Instructions haben 8 0en am Anfang und sind um 8 Stellen zu viel gehiftet
- EPROM ist das einzige Register, dass immer erreichbar ist über:
LOADI DS 0, da wegen Signextensions dann bei 30 und 31 zwei 0en stehen und so kann man die beiden Konstanten für UART und SRAM im EPROM erreichen
- Solange im DS die Bits 30 und 31 mit 01 besetzt sind musst du nichts machen.
Sie können nur durch LOADI DS 0 z.B. mit 0en überschrieben werden wegen der Signextension oder
wenn du ne 22Bit Konstante mit Multiplikation dahinshiftest oder wenn du den DS mit einem anderen Register oder SRAM Inhalt überschreibst.
Da muss auf jeden Fall iwoe DS in der Instruction enthalten sein, keine Sorge n_n
- Jump

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Vertiefungen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

## Vertiefungen
### Binäre Multiplikation

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### 2er Komplement und 1er Komplement
- größte und kleinste darstellbare Zahl usw.

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Signextension

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Datensegmentregister

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Linux Background Knowledge

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

## Linux Background Knowledge
### Desktopenvironment aufsetzen

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Quellen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #7b738f; -->

---

## Quellen
### Wissenquellen

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Vielen Dank für eure Aufmerksamkeit!
# :penguin:

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #7b738f; -->
