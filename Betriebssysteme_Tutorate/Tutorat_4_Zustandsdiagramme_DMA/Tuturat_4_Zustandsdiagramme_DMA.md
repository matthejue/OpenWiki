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
<!-- _backgroundColor: #7b738f; -->

---

## Einstieg
### asdf
- `asdf`

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
- -0.25 Ihr überschreibt so aber die Daten, dir ihr in der b) nach links shiftet. OR IN1 1 kann dafür genutzer werden, wegen seinem Non-Controlling Bit 0
   00000000 00000000 00000000 10110101
OR 00000000 00000000 10101110 00000000
   00000000 00000000 10101110 10110101
![_2021-11-15-23-23-10](_resources/_2021-11-15-23-23-10.png)
- LOADI DS 0 für EPROM weil dann alles da mit 0en ist bei den ersten 10 Bits
- ![[_2021-11-16-01-12-01](_2021-11-16-01-12-01)](_resources/_2021-11-16-01-12-01.png)
- etwas ganuer sollte es noch sein.
Aber korrekt, wenn man es weiter ausführt, mit dem MULTI Befehl
kann man quasi nen Bitshift durchführen
und die Bits an die passende Stelle shiften, z.B. für das IN1 und IN2 Register. So muss man das Register DS garnicht anrühren.
- (0b00000100 // 0b00000010 = 1)
- Der Trick liegt darin die passenden 32Bit Konstanten in Registern IN1 und IN2 zu speichern mittels Bitshiftung durch MULTI oder laden der passenden Konstante in die Register aus dem EPROM und dann über LOADIN IN1 ACC 1 oder z.B. STOREIN IN2 ACC 1 Adressen im UART oder SRAM anzusteuern.
Da ganze umgeht quasi das Datensegmentregister, indem es die über die 32Bit Register direkt die Memory Map über die Bits 31 und 30 über den Adressbus ansteuert.

Der Trick liegt darin die passenden 32Bit Konstanten in Registern IN1 und IN2 zu speichern mittels Bitshiftung durch MULTI oder laden der passenden Konstante in die Register aus dem EPROM und dann über LOADIN IN1 ACC 1 oder z.B. STOREIN IN2 ACC 1 Adressen im UART oder SRAM anzusteuern.
Da ganze umgeht quasi das Datensegmentregister, indem es die über die 32Bit Register direkt die Memory Map über die Bits 31 und 30 über den Adressbus ansteuert. (0b00000100 // 0b00000010 = 1)
- der EPROM ist READONLY -> hat keinen Stack
- andere Flags des Statusregister

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
