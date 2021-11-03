---
theme: gaia
paginate: true
backgroundColor: #ffffff
footer: Betriebssysteme, Tutorat 2, Gruppe 6, [juergmatth@gmail.com](juertmatth@gmail.com), Universität Freiburg Technische Fakultät
style: |
  h1 { color: #377e50; font-size: 80px; text-align: center;}
  h2 { color: #377e50; font-size: 60px; text-align: left; margin-top: 0px; margin-bottom: 0px; line-height: 0px; line-height: 60px;}
  h3 { color: #fbad50; font-size: 40px; text-align: left; margin-top: 10px; margin-bottom: 20px; line-height: 40px;}
  h4 { color: #377e50; font-size: 20px; text-align: center; margin-top: 0px; margin-bottom: 20px; line-height: 0px; font-weight: normal; }
  a { color: #377e50; }
  strong { color: #fbad50; }
  footer { color: #fbad50; font-size: 20px; text-align: center; }
  ul { color: #252a2f; list-style: none; font-size: 25px; }
  p { color: #252a2f; list-style: none;  font-size: 25px; }
  ul li::before {
    content: "\1F784";
    color: #fbad50;
    font-size: 25px;
    font-weight: bold;
    display: inline-block;
    width: 1em;
    margin-left: -1em;
  }
  section::after {
      color: #fbad50;
      font-weight: bold;
    text-shadow: 0 0 8px #000;
  }
  code {
    background: #cabe6a;
    color: #282e33;
  }
  :root {
    --color-background: #ffffff;
    --color-foreground: #d9829f;
    --color-highlight: #F96;
    --color-dimmed: #888;
  }

---

# Tutorat 2 <!--fit-->
### Hardware <!--fit-->

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

# Korrektur

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

## Korrektur
### Häufige Fehler und Interessantes

- `last -s today` oder `last -s 0:00`
- `find -iname "*.pdf"` for insensitive
- `pwd` "Pfad" (I-Node System)
- "Datein und Ordner" bei ls
  - im I-Node System sind Verzeichnisse ebenfalls Dateien
- `cd /usr/share/doc` statt `cd /; cd usr; cd share; cd doc`
- versteckte Dateien und Verzeichnisse (`.file` und `.folder`)
- cp -r und mv -r?, mkdir -r, rm -r, alias
- `date +"Datum: %F`, Zeit: `%T` nicht `%X`
- `cd` zu `/home/<user>` bzw. `~`
- `/` gehört Root, und `~` gehört User

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Korrektur
### Häufige Fehler und Interessantes

- `cp /pfad/datei /pfad/datei /pfad`
- `mv /pfad/datei /pfad/datei /pfad`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Korrektur
### Aufgabe c) - 1

![height:450px](_resources/_2021-10-31-13-34-35.png)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

- SP, FMP, codeseemgnt, prozess mit heap und stack
- RETI Befehle from to usw.
- die Sache mit & und | und xor, vielleicht Zweierkomplement udn Einerkomplement noch
- Quiz: 22Bit
- Linux timsharing multiprogramm, gui und netzwerk

---

# Vielen Dank für eure Aufmerksamkeit!
# :penguin:

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
