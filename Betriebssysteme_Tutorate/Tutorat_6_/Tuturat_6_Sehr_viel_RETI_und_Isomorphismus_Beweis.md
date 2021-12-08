---
theme: gaia
paginate: true
<!-- backgroundColor: #ffffff -->
transition: fade
footer: Betriebssysteme, Tutorat 6, Gruppe 6, [juergmatth@gmail.com](juertmatth@gmail.com), Universität Freiburg Technische Fakultät
style: |
  h1 { color: #432c54; font-size: 80px; text-align: center; }
  h2 { color: #432c54; font-size: 60px; text-align: left; margin-top: 0px; margin-bottom: 0px; line-height: 0px; line-height: 60px;}
  h3 { color: #4d271f; font-size: 40px; text-align: left; margin-top: 10px; margin-bottom: 20px; line-height: 40px;}
  h4 { color: #432c54; font-size: 20px; text-align: center; margin-top: 0px; margin-bottom: 20px; line-height: 0px; font-weight: normal; }
  h5 { color: #005f75; font-size: 30px; text-align: left; margin-top: 40px; margin-bottom: 30px; line-height: 0px; font-weight: normal; }
  a { color: #432c54; }
  strong { color: #4d271f; }
  em { color: #432c54; }
  footer { color: #4d271f; font-size: 20px; text-align: center; }
  ul { color: #252a2f; list-style: none; font-size: 25px; margin-bottom: 0px; }
  p { color: #252a2f; list-style: none;  font-size: 25px; text-align: center; margin-top: 0px; }
  ul li::before {
    content: "\1F784";
    color: #432c54;
    font-size: 25px;
    font-weight: bold;
    display: inline-block;
    width: 1em;
    margin-left: -1em;
  }
  section::after {
      color: #4d271f;
      font-weight: bold;
      text-shadow: 0 0 0px #000;
  }
  code {
    background: #c47f63;
    color: #282e33;
  }
  :root {
    --color-background: #ffffff;
    --color-foreground: #65a5ff;
    --color-highlight: #F96;
    --color-dimmed: #6a6458;
  }

---

# Tutorat 6 <!--fit-->
### Sehr viel RETI und Isomorphismus Beweis <!--fit-->

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

# Klarstellung

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #c47f63; -->

---

## Klarstellung
### Nicht A oder B

- $a \Rightarrow b$: **Wenn** ihr weiter laut seid, **dann** rufe ich die Polizei
  - `if (sind_laut(Nachbarn)) { rufe(Polizei) }`
- $¬a \vee b$: **Entweder** ihr seid leise (**nicht** laut) **oder** ich rufe die Polizei
  - `¬sind_laut(Nachbarn) v rufe(Polizei)`
    - liegt am **ODER**
    - Wenn Bedingung `a` **false**, prüfe `b` **nicht** mehr, da bereits durch **Negation** des ersten **Atoms** gesamte Formel **true** (auch **Lazy Evaluation** genannt)
    - Wenn Bedingung `a` **true**, prüfe `b`, da erstes **Literal** false ist, aber mit dem zweiten **Literal** die Möglichkeit besteht **true** zu werden


<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Übungsblatt

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #c47f63; -->

---

## Übungsblatt
### Aufgabe Z

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Quellen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #c47f63; -->

---

## Quellen
### Wissenquellen

- :shrug:

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Quellen
### Bildquellen

- :shrug:

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Vielen Dank für eure Aufmerksamkeit!
# :penguin:

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #c47f63; -->
