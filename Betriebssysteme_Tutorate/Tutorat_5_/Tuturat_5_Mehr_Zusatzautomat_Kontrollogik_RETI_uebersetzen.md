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

# Vorbereitung

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #7b738f; -->

---

## Vorbereitung
### Mealy und Moore

- Das was du auschreibst ist ist quasi so ne richtig lange Bedingung dafür, wann das Signal SPckenPre den Wert 1, also true annimst.
Und es soll genau dann true sein, also akitv sein in der bestimmten Phase von Execute (E ~s0 s1) im Normalbetrieb wenn die Befehle ...  kodiert an die
Kontrollogoik vom Instruktionsregister weitergegeben werden und ggf. im Zusatzautomat in den Zuständen ...
*1: es soll da der Wert stehen, der in der Symboltabelle als value eintragen ist für diesen
Identifier, also 5. Hast du korrekt gemacht n_n
*2: Ja die Compilerpattern sind nicht effizient, es werden alle Variablen auf dem Stack gespeichert. Echte Compiler versuchen allerdings mittels Graph Coloring möglichst viele Variablen Registern zuzuweisen, was nicht immer so einfach ist, weil man erst die liveness  (von wo bis wo eine Variable verwendet wird und ab wann ihr Wert nicht mehr gebrachtw wird) jeder einzelnen Variable herausfinden muss und schauen muss, wo sich Varaiblen überschneiden, also nicht dem gleichen Register zugewiesen werden können usw.

![_2021-12-01-17-26-39](_resources/_2021-12-01-17-26-39.png)

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

- https://de.wikipedia.org/wiki/Klausel-Normalform

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Quellen
### Bildquellen

- Von WikiBasti 21:12, 21. Jan. 2011 (CET) und JensKohl - Datei:KNF+DNF.png, CC-by-sa 2.0/de, https://de.wikipedia.org/w/index.php?curid=5947670

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Vielen Dank für eure Aufmerksamkeit!
# :penguin:

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #7b738f; -->
