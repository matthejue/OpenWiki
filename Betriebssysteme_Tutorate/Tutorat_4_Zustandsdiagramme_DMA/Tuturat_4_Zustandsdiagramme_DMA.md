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
  h5 { color: #b38336; font-size: 30px; text-align: left; margin-top: 40px; margin-bottom: 30px; line-height: 0px; font-weight: normal; }
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
- ~~nach dem **Polling erst shiften~~ **➞** am Ende um 8 Stellen zu viel gehiftet
- `SUBI ACC 2` um `b1` `0` zu setzen
  - einfach `0` setzen geht nicht, weil die anderen **Flags** des **Statusregisters** erhalten bleiben sollen
- neuen 8Bitvektor dranfügen aus **Empfangsregister** `ADD IN1 1`
- der **EPROM** ist **READONLY** **➞** hat keinen Stack
- andere **Flags** des **Statusregister** nicht überschreiben, nur das Bit, was geändert werden soll
- bei `JUMPc i` beschreibt das `i`, wie oft man die Speicherzelle wechselt, und zwar von der Speicherzelle, wo das `JUMPc i` steht aus (wie `<count>j` in **(Neo-)Vim**)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Vertiefungen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #7b738f; -->

---

## Vertiefungen
### Datensegmentregister
- Solange im `DS` die Bits `30` und `31` mit dem gewollten **Präfix** besesetzt sind muss man sich keine Sorgen machen
- **Verändern kann man die beiden Bits durch:**
  - durch `LOADI DS 0` z.B. mit `0`en überschrieben durch **Signextension**
  - wenn man durch **Multiplikation** andere Bitwerte an Stelle `31` und `30` shiftet
  - oder wenn man den `DS` mit einem anderen **Register** oder **SRAM Inhalt** überschreibt, die `32`Bit lang sind

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Signed (2er Komplement oder 1er Komplement) und Unsigned
##### Unsigned (oder Betrag mit Vorzeichen)
- $<x>=x_{n-1} 2^{n-1}+x_{n-2} 2^{n-2}+\cdots+x_{1} 2^{1}+x_{0} 2^{0}$
- $[x]_{B V}=(-1)^{x_{n-1}}\cdot(x_{n-2} 2^{n-2}+\cdots+x_{1} 2^{1}+x_{0} 2^{0})$
- **Bereich:** 0 bis $+2^{n}-1$ oder $-2^{n-1}+1$ bis $+2^{n-1}-1$

##### Signed (2er Komplement)
- $[x]_{2}=-x_{n-1} 2^{n-1}+x_{n-2} 2^{n-2}+\cdots+x_{1} 2^{1}+x_{0} 2^{0}$ (weil `1000` - `1` = `111`)
- **Bereich:** $-2^{n-1}$ bis $+2^{n-1}-1$ (die $0$ muss auch iwo hin)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Signed (2er Komplement oder 1er Komplement) und Unsigned
##### Signed (1er Komplement)
- $[x]_{1}=-x_{n-1} (2^{n-1}-1)+x_{n-2} 2^{n-2}+\cdots+x_{1} 2^{1}+x_{0} 2^{0}$
- **Bereich:** $-2^{n-1}+1$ bis $+2^{n-1}-1$ (es gibt **2** Kodierungen für die `0`)

##### Vergleich Kodierung von Unsigned, Signed im 1er und 2er Komplement

$$
\begin{array}{l|cccccccc}
x & 000 & 001 & 010 & 011 & 100 & 101 & 110 & 111 \\
\hline[x]_{B V} & 0 & 1 & 2 & 3 & 0 & -1 & -2 & -3 \\
{[x]_{2}} & 0 & 1 & 2 & 3 & -4 & -3 & -2 & -1 \\
{[x]_{1}} & 0 & 1 & 2 & 3 & -3 & -2 & -1 & 0
\end{array}
$$

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Signed (2er Komplement oder 1er Komplement) und Unsigned

##### Kodierung Bedeutungen
- **Höchstwertiges** Bit ist **Sign Bit**, `1` für **negativ**, `0` für **positiv**
- `<i>` **unsigned** und `[i]` **signed**
- **Little Endian**=niedrigstwertiges Bit zuerst, **Big Endian**=höchstwertiges Bit zuerst

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Signed (2er Komplement oder 1er Komplement) und Unsigned


##### Interessante Zahlen für 2er Komplement
- `_0`: `0000 0000 ... 0000`
- `–1`: `1111 1111 ... 1111`
- **Negativste Zahl:** `1000 0000 ... 0000`
- **Positivste Zahl:** `0111 1111 ... 1111`

##### Signed Negation (2er Komplement)
- $\bar{x}+1=-x$ (1er Komplement Negation + 1, da $x+\bar{x}=1111 \ldots 111_{2}=-1$)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Signextension
- **von 8 Bit auf 16 Bit:**
  - `+2`: 0`000 0010 => 0000 0000` 0`000 0010`
  - `–2`: 1`111 1110 => 1111 1111` 1`111 1110`
- **unsigned** wird mit `0`en extendet
- das **Sign Bit** wird nach **links** dupliziert

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Addition binär und dezimal
```text
  011011 (27)            17718
+ 011101 (29)          +  6524
  11111                  11 1
  ======                ======
  111000 (56)            24242
```
```
00 + 00 = 00               00 + 00 (+ 01) = 01
00 + 01 = 01               00 + 01 (+ 01) = 10
01 + 00 = 01               01 + 00 (+ 01) = 10
01 + 01 = 10               01 + 01 (+ 01) = 11
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Subtraktion binär und dezimal (nicht empfohlen, dient Vergleich mit nächster Folie)
```text
(1)
  0111000 (56)         24242
- 0011011 (27)       - 17718
   11111               11 1
  =======             ======
  0011101 (29)          6524
```
```
10 - 00 = 10                10 - 00 (- 01) = 01
10 - 01 = 01                10 - 01 (- 01) = 00
11 - 00 = 11                11 - 00 (- 01) = 10
11 - 01 = 10                11 - 01 (- 01) = 01
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Subtraktion  binär und dezimal (funktioniert immer, egal was für Vorzeichen Zahlen haben)
```text
(2)
   0111000 (56)
 + 1100101 (27) (0011011 negiert und +1)
  11
   =======
   0011101 (29)
```
- **Zweierkomplement Negation:** `11011 -> 011011 -> 100100 -> 100101`
  - `0`en hinzufügen bis **Minuend** und **Subtrahend** beide gleiche Länge haben und Platz für ihr **Vorzeichenbit** ist und dieses korrekt gesetzt ist
  - **1er Komplement Negation** und `+1` nicht vergessen für den **Subtrahenden**

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Multiplikation binär und dezimal
```text
1101 x 1001 (13 * 9)          1304 x 12
       1101                          48
      0000                       +   0
     0000                        + 36
    1101                         +12
   ========                      ======
    1110101 (117)                 15648
```
- **Verschiebung** ist aufgrund der `0`en, die hier ausgelassen sind

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Division binär
```text
  1110101 / 1011 (117 : 11) = 1010 (10) Rest: 111 (7)
- 1011|||
 =====|||
    111||
-     0||
   ====||
    1110|
-   1011|
   =====|
      111
-       0
     ====
      111
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Division dezimal
```text
15658 / 12 = 1304,833...
12|||
==|||
 36||
 36||
 ==||
  05|
   0|
  ==|
   58
   48
   ...
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Division dezimal
```text
   ==
   10|0  oder Rest: 10
    9 6
    ===
      40
      36
      ==
       40
       36
       ==
        4...
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Vertiefungen
### Division binär
- bei **binärer Division** gibt es nur **2 Zustände** (`1` oder `0`), dementsprechend wird entweder die Zahl so übernommen (Zahl $\cdot$ `1`) oder die Zahl ist `0` (Zahl $\cdot$ `0`)

### Division allgemein
- nach jeder Addition ein Zahl runterholen, bis keine mehr runtergeholt werden kann $\to$ dann Ende (bei **ganzzahliger Division**). Was unten stehen bleibt ist der **Rest**
- bei Division mit Nachkommastellen, 0en runterbringen, bis einmal **kein Rest** mehr rauskommt oder Grenze setzen bis zu der man weiter macht $\to$ dann Ende
- ist der **Dividend** trotz runtergebrachter weiter Stelle (weil einmal kein Rest übrig blieb) immernoch kleiner als der **Divisor**, so ist der **Quotient** $0$, weil nur durch $\cdot 0$ rechnen kann der **Divisor** noch kleiner sein als der **Dividend**


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
