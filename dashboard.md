# Libft - Votre toute première bibliothèque personnelle

## Nouvelle notion globale à apprendre

- [ ] Makefile
- [x] Statics function
- [ ] Use the command _'ar'_ to create your library

## Nouvelle notion specifique au langage C à apprendre

- [ ] Overlapping (chevauchement de la mémoire).
- [ ] t
- [ ] t

## Flag à utiliser pour les tests

```bash
# Norminette 
norminette -R CheckDefine -R CheckForbidenSourceHeader | sed '/test/,$d'
# Compilation
gcc -Wall -Wextra -Wall test/test_fct.c fct.c
```

## Function à coder

*Ces fonctions neccessitent aucune fonctions externes.*

|      | Function     |   *Fonctionnel*    |      *Norme*       |   *Compilation*    |       *Test*       |
| :--- | :----------- | :----------------: | :----------------: | :----------------: | :----------------: |
| 01   | `ft_isalpha` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 02   | `ft_isdigit` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 03   | `ft_isalnum` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 04   | `ft_isascii` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 05   | `ft_isprint` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 06   | `ft_strlen`  | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 07   | `ft_memset`  | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 08   | `ft_bzero`   | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 09   | `ft_memcpy`  | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 10   | `ft_memmove` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 11   | `ft_strlcpy` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 12   | `ft_strlcat` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 13   | `ft_toupper` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 14   | `ft_tolower` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 15   | `ft_strchr`  | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 16   | `ft_strrchr` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 17   | `ft_strncmp` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 18   | `ft_memchr`  | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 19   | `ft_memcmp`  | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 20   | `ft_strnstr` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 21   | `ft_atoi`    | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |

*Ces fonctions neccessitent l'utilisation de la fonction `malloc`*.

|      | Function    |   *Fonctionnel*    |      *Norme*       |   *Compilation*    |       *Test*       |
| :--- | :---------- | :----------------: | :----------------: | :----------------: | :----------------: |
| 22   | `ft_calloc` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |
| 23   | `ft_strdup` | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |

*Fonction non inclue dans libc, certaines de ces fonctions peuvent être utiles pour écrite les fonctions des deux premières tables.*

|      | Function        |   *Fonctionnel*    |      *Norme*       |   *Compilation*    | *Test* |
| :--- | :-------------- | :----------------: | :----------------: | :----------------: | :----: |
| 24   | `ft_substr`     | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |  :x:   |
| 25   | `ft_strjoin`    | :heavy_check_mark: |        :x:         |        :x:         |  :x:   |
| 26   | `ft_strtrim`    | :heavy_check_mark:         |        :x: |        :x:         |  :x:   |
| 27   | `ft_split`      |        :x:         |        :x:         |        :x:         |  :x:   |
| 28   | `ft_itoa`       |        :x:         |        :x:         |        :x:         |  :x:   |
| 29   | `ft_strmapi`    |        :x:         |        :x:         |        :x:         |  :x:   |
| 30   | `ft_striteri`   |        :x:         |        :x:         |        :x:         |  :x:   |
| 31   | `ft_putchar_fd` |        :x:         |        :x:         |        :x:         |  :x:   |
| 32   | `ft_putstr_fd`  |        :x:         |        :x:         |        :x:         |  :x:   |
| 33   | `ft_putendl_fd` |        :x:         |        :x:         |        :x:         |  :x:   |
| 34   | `ft_putnbr_fd`  |        :x:         |        :x:         |        :x:         |  :x:   |

*Fichier à ajouter au projet :*

| Fichier    | *Valider* |
| :--------- | :-------: |
| `*.c`      |    :x:    |
| `libft.h`  |    :x:    |
| `Makefile` |    :x:    |

*Programme à ajouter au projet :*

| Fichier   | *Valider* |
| :-------- | :-------: |
| `libft.a` |    :x:    |

## I. Makefile

----------------

### a. Introduction : Makefile c'est quoi ?

Un Makefile est un fichier contenant toutes les commandes que l’on aurait typiquement tapé dans le terminal pour compiler et lancer certaines parties de notre code. Les stocker dans ce fichier nous permet d’accéder à ces commandes en tapant simplement la commande make suivie de potentiels methodes.

Les avantages du makefile sont les suivants :

- Ecrire toutes les règles de compilation dans le fichier Makefile permet de compiler un gros projet avec une unique ligne de commande.

- Lors de la modification d'un fichier d'un projet, le make file permet de recompilé uniquement le fichier modifié. Cela permet pour les gros projets d'eviter de recompiler l'ensemble du projet des qu'on réalise un changement.

### b. Les règles du Makefile

Les règles du makefile prennent la forme suivante :

```Makefile
#Theorique
<cible>: <dépendances>
  Etape pour construire la cible avec les dépendances.

 
```

En pratique, si l'on souhaite compiler le projet **Hello World** composé de trois fichiers :

- main.c
- hello.c
- hello.h

Cela donne :

```Makefile
#Pratique
hello: hello.o main.o
  gcc -o hello hello.o main.o

hello.o : hello.c
  gcc -o hello.o -c hello.c -Wall -Werror -Wextra

main.o : main.c hello.h
  gcc -o main.o -c main.c -Wall -Werror -Wextra

```

Ces règles incluent des **cibles**, qui peuvent être une action que *make* doit entreprendre (par exemple "clean" ou "build") ou des fichiers/objets que *make* devra construire (par exemple des fichiers .o ou un exécutable), et les commandes qui doivent être exécutées afin de construire cette **cible** à partir des **dépendances**. Lorsque vous appelez le programme *make*, il parcourt chacune de ces cibles dans votre Makefile et les exécute.

### c. Les variables

Les Makefile supporte les variables. Ces variables permettent de limiter la redondance dans le fichier text.

Exemple des variables principales :

```Makefile
CC = gcc #Indique quel compilateur à utiliser
CFLAGS = -Wall -Werror -Wextra #Spécifie les lignes de commandes pour les flags
LDFLAGS = #Spécifie options d'édition de liens
EXEC = hello #nom des exécutables à générer

```

### d. Les règles spécifiques

Pour améliorer son Makefile, on peut rajouter quelques cibles standards (règles spécifiques) :
– all : à placer généralement au début du fichier ; les dépendances associées correspondent
à l’ensemble des exécutables à produire ;
– clean : normalement pas de dépendance ; la commande associée supprime tous les
fichiers intermédiaires (notamment les fichiers objets) ;
– mrproper : la commande correspondante supprime tout ce qui peut être regénéré, ce
qui permet une reconstruction complète du projet lors de l’appel suivant à make.

### e. Les variables magiques

les variables magiques :

\$@ permet d’accéder au nom de la target (cible)

\$^ permet d’accéder aux noms des dépendances ( les fichiers après “:” )

\$< permet d’accéder au nom du premier fichier à la droite du “:”

Source :

- <https://ucl-ingi.github.io/LEPL1503-Blog/Makefile-Variables/>
- <https://github.com/lifeissweetgood/makefile-tutorial>
- <https://ensiwiki.ensimag.fr/images/e/eb/Makefile.pdf>
- <https://perso.ensta-paris.fr/~diam/dev/online/make/introMake-AlexBriant.html>

## II. Statics function

---
En C, les fonctions sont globales par défaut. Contrairement aux fonctions globales en C, l'accès aux fonctions statiques est limité au fichier dans lequel elles sont déclarées.

Prototypage :

```C
static int fun(void)
{
  printf("I am a static function ");
}
```

## III. Command _`ar`_

----------------------

Les étapes pour construire une librairie static avec `ar`.

1. Compilation des fichier C sans édition des liens.

Pour compiler les fichiers du code sources, nous utiliserons le compilateur `gcc` avec l'option `-c`.

L'option `-c` permet de compiler les fichier sans l'édition de lien. La compilation s'arrète à la troisième phase de la compilation avant l'édition des liens (1 - *Traitement Préprocesseur : Transformation textuel, inclusion des autres fichiers et remplacement de certaines chaines de caractères* 2 - *Compilation : Traduction du fichier engendré par le préprocesseur en `assembleur`* 3 - *Assemblage :  transforme le code assembleur en un fichier `objet`, compréhensible par le processeur*).

Ici nous nous arrétons donc à la création du fichier objets.

```shell
gcc -c fonctions.c -Wall -Wextra -Werror
```

Cela va générer des fichiers objects avec le meme nom que les fichiers sources `.c`.

Ce sont ces fichiers objets que nous devons ajouter au fichier de bibliothèque.

2. Création de la bibliothèque

Pour créer le fichier de la biliothèque - qui est en fait un fichier d'archive - nous utiliserons ar.

Nous allons utiliser les options :

- `-c` : Creation du fichier librairie.
- `-r` : Ajout avec remplacement, permet d'ajouter les fichiers `.o` à la librairie.
- `-s` : Index, option pour créer un index des fichiers à l'intérieur de la librairie. Cette option permet d'accélérer l'édition des liens vers la bibliothèque lors de la compilation.

Nous allons appeler notre libraire *"libft.a"*. Nous indiquant le nom en premier argument de la ligne de commande. Les autres arguments correspondront aux fichiers objets.

```Shell
ar -crs libft.a functions.o
```

3. Utilisation de la librairie

Maintenant notre librairie *libft* est prête à l'emploie.
Nous pouvons l'utiliser dans un programme. Pour cela, il faudra indiquer lors de l'étape d'édition de lien de notre programme la bibliothèque à linker.

On utilise les command suivante :

```Shell
gcc main.c -L. -lname -o main
```

Description des options :

- `-L.`Spécifie le path de la librairie. Ici "." fait référence au répertoire courant.
- `-l` specifie le nom de la librairie sans le préfix "lib" et le suffix ".a"

Source :

- <https://www.howtogeek.com/427086/how-to-use-linuxs-ar-command-to-create-static-libraries/>
- <https://dev.to/iamkhalil11/all-you-need-to-know-about-c-static-libraries-1o0b>

## IV. Overlapping memory

----------------

memcpy et memmove sont deux fonctions standards de C qui ont pour objectif commun de remplir un espace en mémoire pointé par dest avec les n premiers bytes pointé par source.

La différence entre ces deux functions c'est que memmove gère **L'OVERLAPPING** mais pas memset.

L'overlapping qu'est ce que c'est :

Supposons que nous avons un tableau de 5 chars.

```c
+++++++++++++++++++++++++++++++
| 'a' | 'b' | 'c' | 'D' | 'E' |
+++++++++++++++++++++++++++++++
 0x100 0x101 0x102 0x103 0x104
 ```

 nous allons utilisé *memcpy* pour copier les 3 premiers bytes d'un pointeur pointant à l'adresse `0x100` (src), dans le block mémoire débutant à l'adresse `0x102` (dest).

 Dans ce cas on observe un cas d'overlapping.

 L'addresse `0x102` est contenu à la dans le block mémoire *src* et dans le block mémoire *dest*.

 Ainsi lors de la copie le char `c` sera transformé en `a`. memcpy ne copiera plus `abc`, dans le bloc mémoire débutant à l'adresse `0x102`, mais `aba`.

 ```c
 +++++++++++++++++++++++++++++++
| 'a' | 'b' | 'a' | 'b' | 'a' |
+++++++++++++++++++++++++++++++
 0x100 0x101 0x102 0x103 0x104
 ```

 à la place de

  ```c
 +++++++++++++++++++++++++++++++
| 'a' | 'b' | 'a' | 'b' | 'c' |
+++++++++++++++++++++++++++++++
 0x100 0x101 0x102 0x103 0x104
 ```

 La function *memove* permet d'éviter ce chevauchement.

 Son fonctionnement est simple.

- si l'adresse de *src* est positionné avant l'adresse de
de *dest*, alors :

  - on copie les n bytes de src en partant du dernier bytes vers le premier.

```c
+++++++++++++++++++++++++++++++
| 'a' | 'b' | 'c' | 'D' | 'c' |
+++++++++++++++++++++++++++++++
 0x100 0x101 0x102 0x103 0x104
                           ^
                        Etape 1
+++++++++++++++++++++++++++++++
| 'a' | 'b' | 'c' | 'b' | 'c' |
+++++++++++++++++++++++++++++++
 0x100 0x101 0x102 0x103 0x104
                     ^
                  Etape 2
+++++++++++++++++++++++++++++++
| 'a' | 'b' | 'c' | 'b' | 'c' |
+++++++++++++++++++++++++++++++
 0x100 0x101 0x102 0x103 0x104
               ^
            Etape 3
 ```


- Sinon on utilse le meme fonctionnement que la fonction memcpy. 

