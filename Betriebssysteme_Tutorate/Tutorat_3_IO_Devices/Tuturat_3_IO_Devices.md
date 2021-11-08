---
theme: gaia
paginate: true
backgroundColor: #ffffff
footer: Betriebssysteme, Tutorat 3, Gruppe 6, [juergmatth@gmail.com](juertmatth@gmail.com), Universität Freiburg Technische Fakultät
style: |
  h1 { color: #622640; font-size: 80px; text-align: center;}
  h2 { color: #622640; font-size: 60px; text-align: left; margin-top: 0px; margin-bottom: 0px; line-height: 0px; line-height: 60px;}
  h3 { color: #244e7a; font-size: 40px; text-align: left; margin-top: 10px; margin-bottom: 20px; line-height: 40px;}
  h4 { color: #622640; font-size: 20px; text-align: center; margin-top: 0px; margin-bottom: 20px; line-height: 0px; font-weight: normal; }
  a { color: #622640; }
  strong { color: #244e7a; }
  em { color: #622640; }
  footer { color: #244e7a; font-size: 20px; text-align: center; }
  ul { color: #252a2f; list-style: none; font-size: 25px; margin-bottom: 0px; }
  p { color: #252a2f; list-style: none;  font-size: 25px; text-align: center; margin-top: 0px; }
  ul li::before {
    content: "\1F784";
    color: #244e7a;
    font-size: 25px;
    font-weight: bold;
    display: inline-block;
    width: 1em;
    margin-left: -1em;
  }
  section::after {
      color: #244e7a;
      font-weight: bold;
      text-shadow: 0 0 8px #000;
  }
  code {
    background: #946e71;
    color: #282e33;
  }
  :root {
    --color-background: #ffffff;
    --color-foreground: #946e71;
    --color-highlight: #F96;
    --color-dimmed: #888;
  }

---

# Tutorat 3 <!--fit-->
### IO-Devices <!--fit-->

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
### Korrektursystem

- **Punkte** sind nur zum Vergleich untereinander
- **Ampelsystem:**
  - ![height:54](_resources/_2021-11-08-12-56-04.png): Sehr gut, damit ist man für die Klausur auf der sicheren Seite
  - ![height:50](_resources/_2021-11-08-12-56-29.png): Ausreichend, aber bezüglich Klausur sollte man dann zumindest im Tutorat gut aufpassen
  - ![height:50](_resources/_2021-11-08-12-57-10.png): Nicht ausreichend. Leider zu wenig Arbeitsaufwand investiert

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Vorbereitung

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

## Vorbereitung
### Bitweise Logiktricks
- **Herausfinden, ob ein bestimmes Bit 1 ist:**
  - ___`10100111 00101101 10010100 00000100`
  `&` `00000000 00000000 00000000 00000100`
  ___`00000000 00000000 00000000 00000100`
- **Herausfinden, ob ein bestimmes Bit 0 ist:**
  - ___`01011000 11010010 01101011 11111011`
  `|` `11111111 11111111 11111111 11111011`
  ___`00000000 00000000 00000000 00000100`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Übungsblatt

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 1

- **Adressebus der RETI:** `01000000 00000000 00000000 00000XXX`
- **UART:**
  - **R0:** `XXXXXXXX`, Senderegister (Senden an Peripheriegerät)
  - **R1:** `XXXXXXXX`, Empfangsregister (Empfangen vom Peripheriegerät)
  - **R2:** `b0,b1,X,X,X,X,X,X`, Statusregister
    - `R2[0] = b0`: `senderegister_befuehlbar`
    - `R2[1] = b1`: `empfangsregister_befuehlt`
  - **R3-7:** `XXXXXXXX`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 1

- **Versenden:**
  ```c
  if (senderegister_befuehlbar == 1) {  // R2[0] == 1
    write_data(R0);
    R2[0] = 0;
  }
  // else: warten, denn die UART versendet gerade noch Inhalt von R0 ans
  // Peripheriegerät
  ```
- **Empfangen:**
  ```c
  if (empfangsregister_befuehlt == 1) {  // R2[1] == 1
    read_data(R1);
    R2[1] = 0;
  }
  // else: warten, denn die UART ist noch beim Fühlen des Registers, die UART
  // wird sobald sie fertig ist R2[1] = 0; auf 1 setzen
  ```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 1a)

- **C-Code:**
  ```c
  uart_selektieren()
  while (empfangsregister_befuehlt == 0) {  // R2[1] == 0
    // warten, denn die UART ist noch beim Fühlen des Registers, die UART
    // wird sobald sie fertig ist R2[1] = 0; auf 1 setzen
  }
  read_data(R1);
  R2[1] = 0;
  ```
- `while (1) {if (empfangsregister_befuehlt == 1) { }}`
  **➞** `while (!(empfangsregister_befuehlt == 1)) { }`
  **➞** `while (empfangsregister_befuehlt == 0) { }`
- **Adresse im EPROM:** `r = 00XXXXXX XXXXXXXX XXXXXXXX XXXXXXXX`
  - **passender Konstante:** `SRAM[r] = 01000000 00000000 00000000 00000000`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 1a)

- **DS:** `00000000 00000000 00000000 00000000` **➞** `01000000 00000000 00000000 00000000`
- **RETI-Assembler-Code (UART selektieren):**
  ```assembler
  LOADI IN1 0 // IN1 auf 0 setzen (hier kann später Inhalt aus R1 addiert werden).
  LOAD DS r // Konstante 010...0 in DS laden --> Zugriff auf UART
  LOAD ACC 2 // Statusregister R2 in Akkumulator laden.
  // while (empfangsregister_befuehlt == 0) { }
  ANDI ACC 00000000 00000000 00000000 00000010  // Berechne R2 && 0b10 (2). Wenn b1=1, steht im ACC jetzt eine 2, ansonsten 0.
  JUMP= -2 // JUMP EQUAL. Wenn Bit 1 (b1) von R2 immernoch 0
  read_data(R1);
  R2[1] = 0;
  ```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Übungsblatt
### Aufgabe 1a)
- **RETI-Assembler-Code:**
  ```assembler
  LOADI IN1 0 // IN1 auf 0 setzen (hier kann später Inhalt aus R1 addiert werden).
  LOADI DS 0 // Zugriff auf Daten im EPROM
  LOAD DS r // Konstante 010...0 in DS laden --> Zugriff auf UART
  LOAD ACC 2 // Statusregister R2 in Akkumulator laden.
  #####
  read_data(R1);
  R2[1] = 0;
  ```

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Ergänzungen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

## Ergänzungen
### Trick mit Codierung von Jump Condition

![height:300px](_resources/_2021-11-08-17-36-02.png)![height:250px](_resources/_2021-11-08-17-36-33.png)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Vielen Dank für eure Aufmerksamkeit!
# :penguin:

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
