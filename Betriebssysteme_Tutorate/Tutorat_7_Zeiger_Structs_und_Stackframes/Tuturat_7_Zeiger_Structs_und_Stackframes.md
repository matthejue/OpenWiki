---
theme: gaia
paginate: true
<!-- backgroundColor: #ffffff -->
transition: fade
footer: Betriebssysteme, Tutorat 7, Gruppe 6, [juergmatth@gmail.com](juertmatth@gmail.com), Universität Freiburg Technische Fakultät
style: |
  h1 { color: #338356; font-size: 80px; text-align: center; }
  h2 { color: #338356; font-size: 60px; text-align: left; margin-top: 0px; margin-bottom: 0px; line-height: 0px; line-height: 60px;}
  h3 { color: #397b9a; font-size: 40px; text-align: left; margin-top: 10px; margin-bottom: 20px; line-height: 40px;}
  h4 { color: #338356; font-size: 20px; text-align: center; margin-top: 0px; margin-bottom: 20px; line-height: 0px; font-weight: normal; }
  h5 { color: #397b9a; font-size: 30px; text-align: left; margin-top: 40px; margin-bottom: 30px; line-height: 0px; font-weight: normal; }
  a { color: #397b9a; }
  strong { color: #338356; }
  em { color: #397b9a; }
  footer { color: #338356; font-size: 20px; text-align: center; }
  ul { color: #252a2f; list-style: none; font-size: 25px; margin-bottom: 0px; }
  p { color: #252a2f; list-style: none;  font-size: 25px; text-align: center; margin-top: 0px; }
  ul li::before {
    content: "\1F784";
    color: #338356;
    font-size: 25px;
    font-weight: bold;
    display: inline-block;
    width: 1em;
    margin-left: -1em;
  }
  section::after {
      color: #338356;
      font-weight: bold;
      text-shadow: 0 0 0px #000;
  }
  code {
    background: #909f68;
    color: #282e33;
  }
  :root {
    --color-background: #ffffff;
    --color-foreground: #909f68;
    --color-highlight: #F96;
    --color-dimmed: #6a6458;
  }

---

# Tutorat 7 <!--fit-->
### Zeiger Structs und Stackframes <!--fit-->

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)

---

# Vorbereitungen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #909f68; -->

---

## Vorbereitungen
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

## Vorbereitungen
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

## Vorbereitungen
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

## Vorbereitungen
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

## Vorbereitungen
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

## Vorbereitungen
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

## Vorbereitungen
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

## Vorbereitungen
### Division binär
- bei **binärer Division** gibt es nur **2 Zustände** (`1` oder `0`), dementsprechend wird entweder die Zahl so übernommen (Zahl $\cdot$ `1`) oder die Zahl ist `0` (Zahl $\cdot$ `0`)

### Division allgemein
- nach jeder Addition ein Zahl runterholen, bis keine mehr runtergeholt werden kann $\to$ dann Ende (bei **ganzzahliger Division**). Was unten stehen bleibt ist der **Rest**
- bei Division mit Nachkommastellen, 0en runterbringen, bis einmal **kein Rest** mehr rauskommt oder Grenze setzen bis zu der man weiter macht $\to$ dann Ende
- ist der **Dividend** trotz runtergebrachter weiter Stelle (weil einmal kein Rest übrig blieb) immernoch kleiner als der **Divisor**, so ist der **Quotient** $0$, weil nur durch $\cdot 0$ rechnen kann der **Divisor** noch kleiner sein als der **Dividend**


<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Übungsblatt

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #909f68; -->

---

## Übungsblatt
### Aufgabe 1

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Ergänzungen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #909f68; -->

---

## Ergänzungen
### Packages installieren mit `apt`
##### updating
- `sudo apt update`: update package lists
- `sudo apt update -y && sudo apt full-upgrade`:
##### ![[_2021-11-11-00-32-09](_2021-11-11-00-32-09)](_resources/_2021-11-11-00-32-09.png)
- `sudo apt update -y && sudo apt full-upgrade qutebrowser`: update a program
>- `full-upgrade` is the recommended way over `upgrade`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `apt`
##### installing
- `sudo apt update -y && sudo apt install gcc -y`: install package from repo
- `sudo apt update -y && sudo apt install ./foo_1.0_all.deb -y`: install local package

##### removing
- `sudo apt update -y && sudo apt purge gcc -y`: uninstalls package, es werden alle Konfigurationsdateien gelöscht
- `sudo apt update -y && sudo apt autoremove -y` uninstalls all packages, that are not needed anymore and have no dependencies to other packages
>- `purge` is the recommended way over `remove`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `apt`


##### searching
- autocomplete application name, e.g. `sudo apt install openjdk`, double tab
- `apt list gcc`: lists als packages with which fit the search term
- `apt list gcc --installed`: only list packages that are installed
- `apt show gcc`:  shows desciption of package matching the search term
- `apt search gcc`: lists alls packages which the search term in their discription or name
>- glob-pattern or regex as search pattern

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `apt`

##### other
- `sudo apt download emacs`: download `.deb`-package
- `sudo apt install alacritty -y`: no `y` each time
- `sudo do-release-upgrade`: upgrade **Distro** to a newer release
>- instead of confirming with y, once can also just spam enter
>- access packages over `/var/cache/apt/archives`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `apt`

##### comparisson to apt-get
![width:1000px](_resources/_2021-11-11-00-31-15.png)

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Synchronising with the repositories
- `sudo pacman -Sy`: As new packages are added to the repositories you will need to regularly synchronise the package lists. This will only download the package lists if there has been a change (sudo apt update)
- `sudo pacman -Syy`: Occasionally you may want to force the package lists to be downloaded

##### Updating software
- `sudo pacman -Su`: perform an update of software already installed (sudo apt upgrade)
- `sudo pacman -Syu`: check whether the package lists are up-to-date at the same time

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Searching for software
- `pacman -Ss ^hunspell`: searching a package by name in repos. Supports Regex
- `pacman -Qs hunspell`: searching package locally
- `pacman -Q`: list all packages installed on computer
- `pacman -Qeq`: self installed programs (e), only the program names, not the version number (q)
- `pacman -Qen`: packages self installed from main repos (n)
- `pacman -Qem`: packages self installed from aur (m)
- `pacman -Qdt`: orphans, unneeded dependencies

##### Find out where package installed
- `pacman -Ql handbrake`: look up where application gets installed

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Installing software
- `sudo pacman -S gimagereader-gtk`: install package from repo
- `sudo pacman -U /var/cache/pacman/pkg/rofi-1.6.1-1-x86_64.pkg.tar.zst`: install local package

##### Removing software
- `sudo pacman -Rns dmenu`: remove a package (R), dependencies (s) and configuration files (n)
- `sudo pacman -Rns $(pacman -Qtdq)`: if at a later date you want to remove all orphan packages and configuration files for packages that you removed some time ago
- `sudo pacman -Sc`: remove unused packages and repos from cache

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Finding out version number of local and remote packages
- `pacman -Qi python`: for **local** packages
- `pacman -Si python`: for **remote** packages

<!--small-->
![bg right:10%](_resources/background_2.png)

##### Misc
- If a package in the list is already installed on the system, it will be reinstalled even if it is already up to date. This behavior can be overridden with the `--needed` option.

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Prinzip
- capital letter at beginning
- `S`: sync with repository in some way
- `Q`: search locally
- `R`: remove

##### Yay
- commands are the same as in `pacman`
- adds search in the **AUR (Arch User Repository)**: https://aur.archlinux.org/ (**Duckduckgo:** `!au`)
- `yay polybar` erlaubt auswahl an packages, die z.B. Discord im Namen haben

<!--small-->
![bg right:10%](_resources/background_2.png)

---

## Ergänzungen
### Packages installieren mit `pacman`
##### Anmerkungen
- **PAC**kage **MAN**ager
- always make `sudo pacman -Syu` before installing new software

##### Edit configuration files
- `sudo nvim /etc/pacman.conf`
![height:150px](_resources/_2021-11-11-00-55-04.png)
- `sudo nvim /etc/pacman.d/mirrorlist`

<!--small-->
![bg right:10%](_resources/background_2.png)

---

# Quellen

<!--_class: lead-->
<!--big-->
![bg right:30%](_resources/background_2.png)
<!-- _backgroundColor: #909f68; -->

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
<!-- _backgroundColor: #909f68; -->
