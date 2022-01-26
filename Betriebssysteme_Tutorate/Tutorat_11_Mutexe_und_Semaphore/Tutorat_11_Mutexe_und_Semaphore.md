---
theme: gaia
paginate: true
<!-- backgroundColor: #ffffff -->
transition: fade
footer: Betriebssysteme, Tutorat 11, Gruppe 6, [juergmatth@gmail.com](juertmatth@gmail.com), Universität Freiburg Technische Fakultät
style: |
  h1 { color: #175c83; font-size: 80px; text-align: center; }
  h2 { color: #175c83; font-size: 60px; text-align: left; margin-top: 0px; margin-bottom: 0px; line-height: 0px; line-height: 60px;}
  h3 { color: #11a985; font-size: 40px; text-align: left; margin-top: 10px; margin-bottom: 20px; line-height: 40px;}
  h4 { color: #175c83; font-size: 30px; text-align: left; margin-top: 40px; margin-bottom: 30px; line-height: 0px; font-weight: normal; }
  h5 { color: #175c83; font-size: 20px; text-align: center; margin-top: 0px; margin-bottom: 20px; line-height: 0px; font-weight: normal; }
  a { color: #11a985; }
  strong { color: #175c83; }
  em { color: #11a985; }
  footer { color: #175c83; font-size: 20px; text-align: center; }
  ul { color: #252a2f; list-style: none; font-size: 25px; margin-bottom: 0px; }
  p { color: #252a2f; list-style: none;  font-size: 25px; text-align: center; margin-top: 0px; }
  ul li::before {
    content: "\1F784";
    color: #11a985;
    font-size: 25px;
    font-weight: bold;
    display: inline-block;
    width: 1em;
    margin-left: -1em;
  }
  section::after {
      color: #11a985;
      font-weight: bold;
      text-shadow: 0 0 0px #000;
  }
  code {
    background: #7293a6;
    color: #282e33;
  }
  :root {
    --color-background: #ffffff;
    --color-foreground: #7293a6;
    --color-highlight: #F96;
    --color-dimmed: #6a6458;
  }

---

# Tutorat 11 <!--fit-->
### Mutexe und Semaphore <!--fit-->

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

# Vorbereitungen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #7293a6; -->

---

## Vorbereitungen
### Mutex
![_2022-01-26-21-26-32](_resources/_2022-01-26-21-26-32.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Vorbereitungen
### Semaphor
![_2022-01-26-21-23-13](_resources/_2022-01-26-21-23-13.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

# Übungsblatt

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #7293a6; -->

---

## Übungsblatt
### Aufgabe 1a)
```
solange (i < n) {
  mein_i := i;
  i := i + 1;
  if (mein_i < n) {
    a := vektor_a[mein_i];
    b := vektor_b[mein_i];
    s := komplizierte_funktion(a, b);
    ergebnis[mein_i] := s;
  }
 }
```


<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 1a)
- **Prozess p1** speichert das aktuelle `i` lokal in `mein_i`
- **Prozess p2** speichert das aktuelle `i` lokal in `mein_i`
- **beide** inkrementieren `i`
- jetzt speichert **p3** das aktuelle `i` lokal in `mein_i`
- **p1** und **p2** haben den gleichen Index `old_i`
- **p3** berechnet den Index `oldi + 2`
- `oldi + 1` ausgelassen

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 1 b)
```
solange (i < n) {
  mutex_lock(m);
  mein_i := i;
  i := i + 1;
  mutex_unlock(m);
  if (mein_i < n) {
    a := vektor_a[mein_i];
    b := vektor_b[mein_i];
    s := komplizierte_funktion(a, b);
    ergebnis[mein_i] := s;
  }
 }
```


<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2a)
- Prozess A wird **schlafen gelegt**, wenn
  - Prozess A die Methode `S.down()` aufruft
  - der Zähler **vor** dem Aufruf $\le 0$ bzw. $< 1$ war und der Zähler **nach** dem Aufruf $\le -1$ bzw. $< 0$ war
- Prozess A wird **aufgeweckt**, wenn
  - sich Prozess A (an erster Stelle) in der **Warteschlange** des Semaphors befindet **🠒** Zähler **vor** dem Aufruf $\le -1$ bzw. $< 0$ und **nach** dem Aufruf $\le 0$ bzw. $< 1$
  - Prozess B die Methode `S.up()` aufruft

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2b)
- Ja, **Prozess C** wird aufgeweckt und kann fortfahren:
  - Wird `up()` aufgerufen und ist die Warteschlange **nicht leer**, dann wird immer ein **Prozess** aus der Warteschlange **geholt** und aufgeweckt
  - Der Betrag des Zählerstands vor dem Inkrementieren entspricht der **Länge der Warteschlange**. Wie in der Vorlesung:
    - "Wenn der Zählerstand nach dem Inkrementieren $\le 0$ ist, dann wird ein ”**Prozess** aus der Warteschlange **geholt** und aufgeweckt“

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2c)
![height:300px](_resources/_2022-01-26-23-18-56.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3a)
![height:250px](_resources/_2022-01-26-23-33-56.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3a)
![height:250px](_resources/_2022-01-26-23-32-26.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3b)
![height:200px](_resources/_2022-01-26-23-35-14.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3b)
![height:115px](_resources/_2022-01-26-23-39-01.png)
![height:200px](_resources/_2022-01-26-23-36-35.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

# Quellen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #7293a6; -->

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
<!-- _backgroundColor: #7293a6; -->
