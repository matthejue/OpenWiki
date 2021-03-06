---
theme: gaia
paginate: true
<!-- backgroundColor: #ffffff -->
transition: fade
footer: Betriebssysteme, Tutorat 13, Gruppe 6, [juergmatth@gmail.com](juertmatth@gmail.com), Universität Freiburg Technische Fakultät
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

# Tutorat 13 <!--fit-->
### Scheduling <!--fit-->

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
- **Ankunftszeit / Erzeugungszeit** ist der *Zeitpunkt*, ab dem ein Prozess verfügbar ist
- **Durchlaufzeit** ist die *Differenz* zwischen dem *Zeitpunkt der Beendigung* eines Prozesses und seiner *Ankunftzeit*
  - von mehreren Prozessen kann man die  **mittlere / durchschnittliche Durchlaufzeit** berechnen
- **Nicht-präemptives Scheduling:** CPU kann einem Prozess nur *entzogen* werden, wenn er *beendet* oder *blockiert* ist
- **Präemptives Scheduling:** Aktueller Prozess kann vom Betriebssystem *unterbrochen* werden, wenn dies *richtig erscheint*

<!--small-->
![bg right:10%](_resources/background.png)

---

## Vorbereitungen
### Scheduling Verfahren
- w = Wartezeit, s = Laufzeit, r = Restlaufzeit (s - e), e = bereits durchlaufene s
#### Nicht-Präemptiv
- **First Come First Served:** $max(w)$
- **Shortest Job First:** $min(s)$
- **Highest Response Ratio Next:** $max(\frac{w+s}{s})$

#### Präemptiv
- **Round Robin:** $max(w)$
- **Shortest Remaining Time:** $min(r)$
- **Feedback:** Abarbeitung von *Warteschlangen* nach *Priorität* unter Verwendung der *bisher verbrauchten CPU-Zeit*

<!--small-->
![bg right:10%](_resources/background.png)

---

# Übungsblatt

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #476042; -->

---

## Übungsblatt
### Aufgabe 1
- **🠒** **Evaluation**

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 a)
- $Z_1 = 5$, $Z_2 = 3$, $Z_3 = 7$, $Z_4 = 6$, $Z_5 = 1$
- **1:** In der Vorlesung wurde bewiesen, dass die Schedulingstrategie **Shortest Job First** (**SJF)** die **durchschnittliche Durchlaufzeit** (= die Zeit zwischen Eingang und Abschluss des Jobs) **minimiert**
**🠒** $C_5, C_2 ,C_1 ,C_4, C_3$
- **2:** $\displaystyle\sum_{i=1}^{5} Z_{i}=5+3+7+6+1=22$ Minuten

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 a)
- **3:**
  $$\begin{aligned}
  d^{*} &=\frac{Z_{5}+\left(Z_{5}+Z_{2}\right)+\left(Z_{5}+Z_{2}+Z_{1}\right)+\left(Z_{5}+Z_{2}+Z_{1}+Z_{4}\right)+(\overbrace{\left.Z_{5}+Z_{2}+Z_{1}+Z_{4}+Z_{3}\right)}^{\text {Wartezeit von } C_{3}}}{5} \\
  &=\frac{5 Z_{5}+4 Z_{2}+3 Z_{1}+2 Z_{4}+1 Z_{3}}{5} \\
  &=\frac{5 \cdot 1+4 \cdot 3+3 \cdot 5+2 \cdot 6+1 \cdot 7}{5} \min \\
  &=\frac{51}{5} \min =10,2 \min =10 \min 12 \mathrm{sek}
  \end{aligned}$$

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 b)
#### Shortest Job First
- **1:** *Abarbeitungsreihenfolge*
  ![_2022-02-04-04-24-25](_resources/_2022-02-04-04-24-25.png)
- **2:** *Abarbeitungszeit:* 13 Minuten

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 b)
- **3:** *Durchschnittliche Aufenthaltszeit*
  ![_2022-02-04-04-30-27](_resources/_2022-02-04-04-30-27.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 c)
#### Longest Job First
- **1:** *Abarbeitungsreihenfolge*
  ![_2022-02-04-04-35-04](_resources/_2022-02-04-04-35-04.png)
- **2:** *Abarbeitungszeit:* 11 Minuten

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 c)
- **3:** *Durchschnittliche Aufenthaltszeit:*
  ![_2022-02-04-04-40-25](_resources/_2022-02-04-04-40-25.png)
- Aus Sicht des **Azubis** ist **Longest Job First** optimal, da so nur $11$ statt $13$ Minuten zum Abarbeiten aller Kunden benötigt wird
- Aus Sicht der **Kunden** ist **Shortest Job First** optimal, da sie sich so durchschnittlich nur $6,4$ Minuten statt $9$ Minuten in der Bäckerei aufhalten müssen

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 c) - Anmerkungen
- **SJF** ist der **optimale Scheduler** zur **Minimierung der durchschnittlichen Durchlaufzeit** (Beweis siehe Vorlesung). **LJF** liefert einen Schedule mit **hohem Durchsatz**. In diesem Spezialfall sogar den optimalen Plan.
  - Wie man an diesem Beispiel sieht, sind **Durchlaufzeit** und **Durchsatz** verschieden und **nicht** gleichzeitig optimierbar.
- Den optimalen Schedule zur Maximierung des **Durchsatzes** zu bestimmen ist im Allgemeinen NP-schwer, **LJF** ist jedoch eine gute **Heuristik**, die eine **obere Grenze** für die Gesamtdauer von $\left(\frac{4}{3}-\frac{1}{3 m}\right) \cdot O P T$ garantiert, wobei $m$ die **Anzahl der Verkäufer** bzw. **parallelen Prozessoren** und OPT die **Gesamtdauer** des **optimalen Schedule** ist.

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3
- **Behauptung:** Die Scheduling-Strategie **Shortest Job First** (SJF) ist im Allgemeinen nicht optimal, wenn alle Prozesse **nicht** gleichzeitig verfügbar sind

#### Beweis durch Gegenbeispiel
- **4 Prozesse:**
  ![height:250px](_resources/_2022-02-06-23-47-17.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3
- **Laufzeiten:** $2, 3, 1, 1$
- **Ankunftzeiten:** $0, 0, 3, 3$
- **Mittlere Durchlaufzeit** von **SJF**:
  ![height:80px](_resources/_2022-02-06-23-54-35.png)
- **Mittlere Durchlaufzeit** des **alternativen Plans**:
  ![height:80px](_resources/_2022-02-06-23-54-49.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3
- **Ausführungsplan:**
  ![_2022-02-06-23-56-45](_resources/_2022-02-06-23-56-45.png)
- **Erklärung:**
  - So konstruiert, dass **Ankunft** der kurzen Prozesse $P_3$, $P_4$ genau auf die **Beendigung** des längeren Prozesses $P_2$ fällt, falls dieser **zuerst** ausgeführt wird

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3
- Wird dagegen der kurze Prozess $P_1$ **zuerst** ausgeführt, steht danach **zuerst** nur $P_2$ zur Verfügung und wird deswegen **ausgeführt**, was dann die **kurzen Prozesse** ($P_3$ und $P_4$) **blockiert** und somit die **mittlere Durchlaufzeit** ansteigen lässt

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 4
- **Alterungs-Algorithmus**
  ![_2022-02-07-00-22-29](_resources/_2022-02-07-00-22-29.png)
  - berechnet `CPU USAGE`
    - zur Bestimmung der **Prioritäten**
- `CPU Anteil(t)` ist dabei der von dem Prozess verbrauchte **Anteil an Rechenzeit** in der **letzten Sekunde**, also im Interval von $t − 1$ bis $t$, und liegt zwischen $0$ und $1$
- *Nice to know:* CPU USAGE ist ein **exponentiell geglätteter Mittelwert**

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 4 a)
- **geg.:**
  - `T = 3`
  - Zeitpunkt `k` war `CPU_USAGE(k) = 0.32`
  - Intervall `k` bis `k+1` war `48%` CPU-Anteil
  - Intervall `k+1` bis `k+2` war `96%` CPU-Anteil
  - Intervall `k+2` bis `k+3` war `28%` CPU-Anteil
  - Intervall `k+3` bis `k+4` war `52%` CPU-Anteil
- **ges.:** `CPU USAGE`-Werte zu den Zeitpunkten `k + 1`, `k + 2`, `k + 3` und `k + 4`

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 4 a)
#### ![_2022-02-07-02-27-13](_resources/_2022-02-07-02-27-13.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 4 b)
> Auswirkung **größerer Werte** von `T` auf die **Berechnung** und den **zeitlichen Verlauf** von `CPU USAGE`

- für **größere Werte** von $T$ wird auch der **Faktor** $q$ **größer**
  - bei **größerem** $q$ wird bei der Berechnung von `CPU USAGE` **mehr Gewicht** auf den **alten Wert** von `CPU USAGE` gelegt, der aktuelle **CPU-Anteil** wird **geringer gewichtet**.
    - **Veränderungen** des **CPU-Anteils** zeichnen sich **langsamer** in `CPU USAGE` ab, der Wert verhält sich **träger**”

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 4 b)
![height:450px](_resources/_2022-02-07-02-45-53.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 4 b)
![height:450px](_resources/_2022-02-07-02-47-33.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 5
- **geg.:**
  - mehrere **Prozesse**, die genau $T$ Zeiteinheiten laufen, bevor sie **blockieren**
  - **Kontextwechsel** dauert $S$ Zeiteinheiten, wobei diese Zeit als **Verlust** zu rechnen ist, da die Prozesse in dieser Zeit **keine** Rechenoperationen durchführen können
  - Scheduler **Round-Robin-Verfahren** (RR)
  - Quantum (Zeitscheibe) von $Q$ **Zeiteinheiten**
- **ges.:**
  - Formel in Abhängigkeit des Quantums welcher **Anteil** der **gesamten CPU-Zeit** den Prozessen nach Abzug des Verlusts durch die Kontextwechsel **effektiv zur Verfügung**

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 5 a)
#### $T < Q$
- $\dfrac{T}{T+S}$
- Jeder Prozess wird ausgeführt, bis er **blockiert**, dann wird ein **Kontextwechsel** durchgeführt.
- Die Gesamtzeit ist $T + S$, wovon $T$ effektiv genutzt wird. Also ist das oben die **effektive CPU-Auslastung**

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 5 b)
#### $Q < T$
- $\displaystyle\frac{T}{T+\lceil\frac{T}{Q}\rceil S}$
- Jeder Prozess wird $\lceil\frac{T}{Q}\rceil$ mal **unterbrochen**, bis er **blockiert** (einschließlich des **Kontextwechsels** beim **Blockieren** selbst)
- Dadurch entsteht ein **Overhead** von $\lceil\frac{T}{Q}\rceil$, also ist das oben die **effektive CPU-Auslastung**

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungblatt
### Aufgabe 5 c)
#### $Q$ gegen $0$
- $\displaystyle\lim _{Q \rightarrow 0} \frac{T}{T+\lceil\frac{T}{Q}\rceil \cdot S}=0$

<!--small-->
![bg right:10%](_resources/background.png)

---

# Ergänzungen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #476042; -->

---

## Ergänzungen
### 16 Color Terminals
![height:300px](_resources/_2022-02-07-04-54-49.png)
- **Resetsequenz**, um das printen von Farben zu **stoppen**: `\033[0;0m`
- können auch **andere Farbtöne** sein, als die **Farbnamen** vorgeben

<!--small-->
![bg right:10%](_resources/background.png)

---

## Ergänzungen
### 256 Color Terminals
![height:350px](_resources/_2022-02-07-04-57-01.png)
- **Teilmenge** innerhalb aller Farben, die durch das **Terminal** festgelegt wird

<!--small-->
![bg right:10%](_resources/background.png)

---

## Ergänzungen
### 256 Color Terminals
##### ![height:350px](_resources/_2022-02-07-04-59-52.png)
##### https://www.ditig.com/256-colors-cheat-sheet


<!--small-->
![bg right:10%](_resources/background.png)

---

## Ergänzungen
### Alle 256 Farben ausgeben
- `colors256.py`:
  ```python
  def colors_16(color_):
      return("\033[2;{num}m {num} \033[0;0m".format(num=str(color_)))


  def colors_256(color_):
      num1 = str(color_)
      num2 = str(color_).ljust(3, ' ')
      if color_ % 16 == 0:
          return(f"\033[38;5;{num1}m {num2} \033[0;0m\n")
      else:
          return(f"\033[38;5;{num1}m {num2} \033[0;0m")

  print("The 16 colors scheme is:")
  print(' '.join([colors_16(x) for x in range(30, 38)]))
  print("\nThe 256 colors scheme is:")
  print(' '.join([colors_256(x) for x in range(256)]))
  ```

<!--small-->
![bg right:10%](_resources/background.png)

---

## Ergänzungen
### 24-bit truecolor
- `printf "\x1b[${bg};2;${red};${green};${blue}m\n"`
  - **Bsp.:** `printf "\x1b[38;2;255;100;0mTRUECOLOR\x1b[0m\n"`
- **alle anzeigen:**
  ```awk
  awk 'BEGIN{
      s="/\\/\\/\\/\\/\\"; s=s s s s s s s s;
      for (colnum = 0; colnum<77; colnum++) {
          r = 255-(colnum*255/76);
          g = (colnum*510/76);
          b = (colnum*255/76);
          if (g>255) g = 510-g;
          printf "\033[48;2;%d;%d;%dm", r,g,b;
          printf "\033[38;2;%d;%d;%dm", 255-r,255-g,255-b;
          printf "%s\033[0m", substr(s,colnum+1,1);
      }
      printf "\n";
  }'
  ```

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
- https://stackabuse.com/how-to-print-colored-text-in-python/
- https://www.ditig.com/256-colors-cheat-sheet
- https://github.com/termstandard/colors

<!--small-->
![bg right:10%](_resources/background.png)

---

## Quellen
### Bildquellen
- https://stackabuse.com/how-to-print-colored-text-in-python/

<!--small-->
![bg right:10%](_resources/background.png)

---

# Vielen Dank für eure Aufmerksamkeit!
# :four_leaf_clover:

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #476042; -->
