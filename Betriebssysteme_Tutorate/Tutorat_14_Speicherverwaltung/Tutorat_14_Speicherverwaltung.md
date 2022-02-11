---
theme: gaia
paginate: true
<!-- backgroundColor: #ffffff -->
transition: fade
footer: Betriebssysteme, Tutorat 14, Gruppe 6, [juergmatth@gmail.com](juertmatth@gmail.com), Universität Freiburg Technische Fakultät
style: |
  h1 { color: #A8BA54; font-size: 80px; text-align: center; }
  h2 { color: #A8BA54; font-size: 60px; text-align: left; margin-top: 0px; margin-bottom: 0px; line-height: 0px; line-height: 60px;}
  h3 { color: #DDDE8E; font-size: 40px; text-align: left; margin-top: 10px; margin-bottom: 20px; line-height: 40px;}
  h4 { color: #A8BA54; font-size: 30px; text-align: left; margin-top: 40px; margin-bottom: 30px; line-height: 0px; font-weight: normal; }
  h5 { color: #A8BA54; font-size: 20px; text-align: center; margin-top: 0px; margin-bottom: 20px; line-height: 0px; font-weight: normal; }
  a { color: #DDDE8E; }
  strong { color: #A8BA54; }
  em { color: #DDDE8E; }
  footer { color: #A8BA54; font-size: 20px; text-align: center; }
  ul { color: #252a2f; list-style: none; font-size: 25px; margin-bottom: 0px; }
  p { color: #252a2f; list-style: none;  font-size: 25px; text-align: center; margin-top: 0px; }
  ul li::before {
    content: "\1F784";
    color: #DDDE8E;
    font-size: 25px;
    font-weight: bold;
    display: inline-block;
    width: 1em;
    margin-left: -1em;
  }
  section::after {
      color: #DDDE8E;
      font-weight: bold;
      text-shadow: 0 0 0px #000;
  }
  code {
    background: #BACC8B;
    color: #282e33;
  }
  :root {
    --color-background: #ffffff;
    --color-foreground: #D8DEA6;
    --color-highlight: #F96;
    --color-dimmed: #6a6458;
  }
  .hljs-number {
    color: #A2B671;
  }
  .hljs-keyword {
    color: #1F3A36;
  }
  .hljs-comment {
    color: #6a6458;
  }
  .hljs-params {
    color: #000000;
  }
  .hljs-title {
    color: #1F3A36;
  }
---

# Tutorat 14 <!--fit-->
### Speicherverwaltung <!--fit-->

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

# Vorbereitungen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #476042; -->

---

## Vorbereitungen
### Definitionen
- **Interne Fragmentierung:** Prozess *kleiner* als die dafür vorgesehene *Partition*
- **Externe Fragmentierung:** Wenn es zu der Situation kommen kann, dass der gesamte *Speicherplatz* eigentlich *ausreicht* für einen Prozess, aber der Prozess *nicht* abgespeichert werden kann, da dieser Speicherplatz nicht *kontinuierlich* ist
- **Virtueller Speicher** = *Hauptspeicher* + *Hintergrundspeicher*


<!--small-->
![bg right:10%](_resources/background.png)

---

## Vorbereitungen
### Speicherzuteilungsalgorithmen
- **Best Fit:** Suche *kleinsten* Block, der *ausreicht*
- **First Fit:** Suche *beginnend* mit *Speicheranfang* bis *ausreichend* großer Block gefunden
- **Next Fit:** Suche beginnend mit der Stelle der *letzten Speicherzuweisung*

<!--small-->
![bg right:10%](_resources/background.png)

---

## Vorbereitungen
### Buddy System
![height:350px](_resources/_2022-02-11-15-33-36.png)
- **freie** Blöcke können nur **verschmolzen** werden, wenn sie **denselben Elterknoten** haben

<!--small-->
![bg right:10%](_resources/background.png)

---

## Vorbereitungen
### Paging
- **Logische Adresse** im Programm besteht aus *Seitennummer* und *Offset*
- **Physikalische Adresse** besteht aus *Rahmennummer* und *Offset*

![height:400px](_resources/_2022-02-11-01-16-51.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Vorbereitungen
### Paging

![height:450](_resources/_2022-02-11-01-15-29.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

# Quellen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #476042; -->

---

## Quellen
### Wissenquellen

- :shrug:
- source

<!--small-->
![bg right:10%](_resources/background.png)

---

## Quellen
### Bildquellen

- :shrug:
- source

<!--small-->
![bg right:10%](_resources/background.png)

---

# Vielen Dank für eure Aufmerksamkeit!
# :penguin:

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #476042; -->
