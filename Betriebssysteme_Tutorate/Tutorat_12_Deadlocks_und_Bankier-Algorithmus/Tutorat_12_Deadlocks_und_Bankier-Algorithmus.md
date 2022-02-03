---
theme: gaia
paginate: true
<!-- backgroundColor: #ffffff -->
transition: fade
footer: Betriebssysteme, Tutorat 12, Gruppe 6, [juergmatth@gmail.com](juertmatth@gmail.com), Universität Freiburg Technische Fakultät
style: |
  h1 { color: #34646F; font-size: 80px; text-align: center; }
  h2 { color: #34646F; font-size: 60px; text-align: left; margin-top: 0px; margin-bottom: 0px; line-height: 0px; line-height: 60px;}
  h3 { color: #2F584E; font-size: 40px; text-align: left; margin-top: 10px; margin-bottom: 20px; line-height: 40px;}
  h4 { color: #34646F; font-size: 30px; text-align: left; margin-top: 40px; margin-bottom: 30px; line-height: 0px; font-weight: normal; }
  h5 { color: #34646F; font-size: 20px; text-align: center; margin-top: 0px; margin-bottom: 20px; line-height: 0px; font-weight: normal; }
  a { color: #2F584E; }
  strong { color: #34646F; }
  em { color: #2F584E; }
  footer { color: #34646F; font-size: 20px; text-align: center; }
  ul { color: #252a2f; list-style: none; font-size: 25px; margin-bottom: 0px; }
  p { color: #252a2f; list-style: none;  font-size: 25px; text-align: center; margin-top: 0px; }
  ul li::before {
    content: "\1F784";
    color: #2F584E;
    font-size: 25px;
    font-weight: bold;
    display: inline-block;
    width: 1em;
    margin-left: -1em;
  }
  section::after {
      color: #425050;
      font-weight: bold;
      text-shadow: 0 0 0px #000;
  }
  code {
    background: #39644E;
    color: #282e33;
  }
  :root {
    --color-background: #ffffff;
    --color-foreground: #BC642B;
    --color-highlight: #F96;
    --color-dimmed: #6a6458;
  }
  .hljs-number {
    color: #34646F;
  }
  .hljs-keyword {
    color: #2F584E;
  }
  .hljs-comment {
    color: #6a6458;
  }
  .hljs-params {
    color: #000000;
  }
  .hljs-title {
    color: #39644E;
  }
---

# Tutorat 12 <!--fit-->
### Deadlocks und Bankier-Algorithmus <!--fit-->

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

# Vorbereitung

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #000D0D; -->

---

## Vorbereitung
### Ressourcendiagramm
- **Ressourcenspur** gibt eine **Ausführungsreihenfolge** der beiden **Prozesse** auf einem **pseudoparallelen** Prozessor an
- Die **Ressourcenspur** darf vom Start zum Ende nur nach **rechts** und nach **oben** entlang des Gitters verlaufen
- Eine **Ressourcenspur** kann ein Rechteck nur am **linken** und **unteren** Rand berühren, da die Prozesse ihre jeweiligen **Operationen** erst beim **Überschreiten** eines Zeitpunktes **vollständig** ausführen
- Läuft die **Ressourcenspur** in eine **Ecke** hinein, von der die Spur **weder** nach **rechts** noch nach **oben** fortgesetzt werden kann, ohne ein Rechteck zu betreten, so befinden sich die Prozesse in einem **Deadlock**

<!--small-->
![bg right:10%](_resources/background.png)

---

## Vorbereitung
### Belegungs-Anforderungs-Graph
- Wenn eine Ressource von einem Prozess **gesperrt** ist, zeichnet man den Pfeil von der **Ressource** zum **Prozess**
- Wenn ein Prozess eine Ressource anfordert und **blockiert**, weil die Ressource nicht verfügbar ist, dann zeichnet man den Pfeil vom **Prozess** zur **Ressource**.
  - dieser Pfeil wird verwendet, sobald von einer Resource **zwei** Pfeil ausgehen

<!--small-->
![bg right:10%](_resources/background.png)

---

## Vorbereitung
### Bankier-Algorithmus
![height:450px](_resources/_2022-02-03-03-06-40.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

# Übungsblatt

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #000D0D; -->

---

## Übungsblatt
### Aufgabe 1 a)
![_2022-02-03-01-41-07](_resources/_2022-02-03-01-41-07.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 1 b)
- Es gibt keine **konkave** Ecke, in die die Ressourcenspur hineinlaufen kann und nicht mehr nach **rechts** oder **oben** fortgesetzt werden kann:
  - Ressourcenspur kann sich nur nach **oben** oder **rechts** bewegen, da wegen **Pseudoparallelität** immer einer der beiden Prozesse, der gerade die CPU zugewiesen bekommen hat, Instructions ausführt, sich also **vorwärts** in der Zeit bewegt
  - Da es hier zu keinem Zeitpunkt **konkaven** Ecken oder **Sackgassen** gibt, gibt es immer einen Weg, den man nach **oben** oder **rechts** ausweichen kann **🠒** es ist zu jedem erreichbaren **Zeitpunkt** einer der beiden **Prozesse ausführbar**
    - Falls die **Instruction** des einen Prozesses **blockiert** ist, kann dafür immer der **andere Prozess** eine **Instruction** ausführen. Es gibt immer einen **Ausweg**, wie sich die beiden Prozesse **nicht** gegenseitig **blockieren**


<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 1 c)
![_2022-02-03-01-55-22](_resources/_2022-02-03-01-55-22.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 1 d)
- **Befehlsfolge, die zum Deadlock führt:**
  - **1:** *Prozess 2* Zeile 1: Belegt A
  - **2:** **Prozess 3** Zeile 1: Belegt B
  - **3:** **Prozess 3** Zeile 2: Fordert A an und blockiert, da belegt von *Prozess 2*
  - **4:** *Prozess 2* Zeile 2: Belegt C
  - **5:** *Prozess 2* Zeile 3: Gibt A frei
  - **6:** *Prozess 2* Zeile 4: Fordert B an und blockiert, da belegt von **Prozess 3**
  - **7:** **Prozess 3** Zeile 2: bekommt A nun zugeteilt
  - **8:** **Prozess 3** Zeile 3: Fordert C an und blockiert, da belegt von *Prozess 2*

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 1 e)
![height:400px](_resources/prozesse.png)![height:400px](_resources/_2022-02-03-02-15-59.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 1 e)
![height:400px](_resources/prozesse.png)![height:400px](_resources/_2022-02-03-02-17-26.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 1 e)
![height:400px](_resources/prozesse.png)![height:400px](_resources/_2022-02-03-02-18-54.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 a)
![height:350px](_resources/_2022-02-03-02-54-48.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 a)
![height:450px](_resources/_2022-02-03-02-55-59.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 a)
![_2022-02-03-02-58-50](_resources/_2022-02-03-02-58-50.png)

- Da in jeder der drei verbleibenden relevanten Zeilen **mindestens** **ein** Eintrag **negativ** ist, kann **kein** weiterer Prozess mehr mit seinen **Maximalanforderungen** ausgeführt werden kann
- **in kurz:** da in jeder Zeile **mindestens** **ein** Eintrag von $A$ **größer** als der entsprechende Eintrag von $F$ ist **🠒** **unsicherer Zustand**

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 b)
![height:350px](_resources/_2022-02-03-03-28-27.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 b)
![height:450px](_resources/_2022-02-03-03-29-41.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 b)
![height:450px](_resources/_2022-02-03-03-31-34.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 b)
![height:450px](_resources/_2022-02-03-03-32-58.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 2 b)
![height:450px](_resources/_2022-02-03-03-34-07.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3 a)
- Der **Bankier-Algorithmus** betrachtet nur die **Maximalanforderungen** und nicht den tatsächlichen **Programmablauf**
**🠒** Bankier-Algorithmus verhält sich oft zu **restrektiv**

#### Beispiel 2
![height:125px](_resources/_2022-02-03-03-54-38.png)
- Die **Zeitintervalle**, in denen verschiedene **Ressourcen** für einen Prozess **reserviert** sind, müssen sich **nicht** überlappen

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3 a)
![height:350px](_resources/_2022-02-03-04-21-33.png)

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3 b)
- Ein Prozess muss **nicht zwingend** die von ihm angegebene ”**maximale Anzahl** angeforderter Ressourcen“ einer **Klasse** auch wirklich anfordern

#### Beispiel 2
![_2022-02-03-04-33-14](_resources/_2022-02-03-04-33-14.png)

- Variable `x` von beiden Prozessen **gemeinsam** genutzt, Ausführung jeder Zeile **atomare** Operation

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3 b)
- Wir nehmen $V = 2$ an
- $M_0 = 2$ (kann im Fall von $y \ge 0$ auftreten) $M_1 = 2$
- Die **Voraussetzungen** für den **Bankier-Algorithmus** sind erfüllt:
  – Die **Maximalanforderungen** sind im Voraus bekannt
  – $M_0 \le V$ und $M_1 \le V$, also übersteigen die **Maximalanforderungen** für keinen Prozess die zur Verfügung stehenden **Ressourcen**
- **Unsichrer Zustand nach Ereignissen:**
  - $P_0$ führt zuerst Zeile $1$ und $2$ aus, danach führt $P_1$ die Zeilen $1$ und $2$ aus:
  - **Unsichrer Zustand:** $E_{0}=1, E_{1}=1, A_{0}=M_{0}-E_{0}=1, A_{1}=M_{1}-E_{1}=1$ und $F_{A}=V_{A}-E_{0}-E_{1}=2-1-1=0$.

<!--small-->
![bg right:10%](_resources/background.png)

---

## Übungsblatt
### Aufgabe 3 b)
- Es kann für **keinen** Prozess eine **Restausführung** gewährleistet werden, da der **Bankier-Algorithmus** die **Maximalanforderungen** betrachtet ohne den **tatsächlichen Programmablauf** zu berücksichtigen
- Da $x = −3$ ist, wird von $P_0$ **nie** mehr als eine **Ressource** **gleichzeitig** von $A$ verwendet. Deshalb gibt es ausgehend von diesem Zustand **keine Möglichkeit** einen **Deadlock** zu erhalten

#### Fazit
- In den beiden Beispielen, **kann** (nicht muss) es einen **unsicheren Zustand** geben, der aber **nicht zwingend** zu einem **Deadlock** führt

<!--small-->
![bg right:10%](_resources/background.png)

---

# Quellen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #000D0D; -->

---

## Quellen
### Wissenquellen

- :shrug:

<!--small-->
![bg right:10%](_resources/background.png)

---

## Quellen
### Bildquellen

- :shrug:

<!--small-->
![bg right:10%](_resources/background.png)

---

# Vielen Dank für eure Aufmerksamkeit!
# :penguin:

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #000D0D; -->
