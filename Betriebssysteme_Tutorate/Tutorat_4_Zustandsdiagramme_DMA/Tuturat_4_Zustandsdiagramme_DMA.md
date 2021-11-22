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

# Übungsblatt

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #7b738f; -->

---

## Übungsblatt
### Aufgabe 1

<!-- ![img](_resources/_2021-11-21-13-02-44.png) -->

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 2a)
- Taktrate des Prozessors = $8\cdot 10^{8}\dfrac{1}{s}$
- Datenübertragungsrate der Festplatte = $8\cdot 10^{6}\dfrac{B}{s}$
```
|8*32Bit=32Byte|1000Takte____|__________|Aktionen
|4*10^(-6)s____|1,25*10^(-6)s|__________|einzelne Zeitdauern
|8*10^(-5)s_____________________________|Gesamtdauer
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 2a)

##### Zeit der Festplatte (Dauer der 32Byte Übertragung)

$1s\overset{\wedge}{=}800\cdot10^{6}B$
$\Downarrow \cdot 4\cdot10^{-6}$
$4\cdot10^{-6}s\overset{\wedge}{=}32B$

##### Gesamtdauer

$4\cdot 10^{-6}s\overset{\wedge}{=}5\%$
$\Downarrow \cdot 20$
$8\cdot 10^{-5}s\overset{\wedge}{=} 100\%$

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 2a)

##### Zeit des Prozessors (Dauer der 1000 Takte)

$1s\overset{\wedge}{=}8\cdot 10^{8} Takte$
$\Downarrow \cdot 1,25\cdot 10^{-6}$
$1,25\cdot 10^{-6}s\overset{\wedge}{=}1000 Takte$

##### Anteil der CPU-Zeit

$\dfrac{1,25\cdot 10^{-6}s}{8\cdot 10^{-5}s}=0.0156=1,56\%$

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 2b)
- Taktrate des Prozessors = $8\cdot 10^{8}\dfrac{1}{s}$
- Datenübertragungsrate der Festplatte = $8\cdot 10^{6}\dfrac{B}{s}$
```
|1500Takte|16KB|500Takte______|_________|Aktionen
|1500+500Takte_____|16KB______|_________|Aktionen zusammengefasst
|2,5*10^(-6)s______|2*10^(-3)s|_________|einzelne Zeitdauern
|4*10^(-2)s_____________________________|Gesamtdauer
```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 2b)

##### Zeit der Festplatte (Dauer des 16KB Block)

$1s\overset{\wedge}{=}8\cdot 10^{6}B$
$\Downarrow \cdot 2\cdot 10^{-3}$
$2\cdot 10^{-3}s\overset{\wedge}{=}16\cdot 10^{3}B$

##### Gesamtdauer

$2\cdot 10^{-3}s\overset{\wedge}{=}5\%$
$\Downarrow \cdot 20$
$4\cdot 10^{-2}s\overset{\wedge}{=}100\%$

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 2b)

##### Zeit des Prozessors (Dauer der 2000 Takte

$1s\overset{\wedge}{=}8\cdot 10^{8}Takte$
$\Downarrow \cdot 2,5\cdot 10^{-6}$
$2,5\cdot 10^{-6}s\overset{\wedge}{=}2\cdot 10^{3}Takte$

##### Anteil der CPU-Zeit

$\dfrac{2,5\cdot 10^{-2}s}{0.04s}=6,25\cdot 10^{-5}=0.0000625=0.00625\%$

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 3

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
