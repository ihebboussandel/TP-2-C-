# TP-2-C-
Correction des exercices Des tp
<br><b>Exercice 1 :</b> <br>
On déclare un tableaux d'entiers A de Dimension 10 définir deux fonctions, remplitA et impA, permettent de remplir et Imprimer le tableaux
Ecrire une function <b>Trie</b> qui Tri les éléments d'un tableau dans l'ordre croissant;
Tester tous ses fonctions dans un programme principal. <br>
<br><b>Exercice 2 :</b> <br>
Ecrire un programme qui lit deux tableaux d'entiers A et B et leurs dimention N et M au calvier et qui ajoute les élement de B à la fin de A.<br>
Utiliser deux pointeurs PA et PB et afficher le tableau résultatant A.<br>
<br><b>Exercice 3 :</b> <br>
Ecrire un programme qui litune chaine de caractéres CH et détermine la longeur de la chaine à l'aide d'un pointeur P.
<br><b>Exercice 4 :</b> <br>
Ecrire un programme qui lit deux chaines de caractéres CH1 et CH2 au clavier et supprime la premiére occurance de CH2 dans CH1. 
Utiliser uniqument des pointeures, une variable logique TROUVE et la fonction strcpy.
<br> <b>Examples</b>: ALphonse phon==> ALse<br>
<br><b>Exercice 5 :</b> <br>
donner une function qui retourne la moyenne, le minimum et le maximum d'un tableau unidimensionnels. <br>
<br><b>Exercice 6 :</b> <br>
On veut écrire un programme qui permet de gérer une liste de notes grace à un tableau de taille variable .<br>
pour cela, on va créer une classe Note sera défie par un nom (string),un prénom (string) et une valeur (une reel). Faites les constructeures et distructeurs.
on vas aussi faire une classe Note. Cet attribut sera en fait un tableau pointeur: 
<br>
<b> Note **tableauNotes;</b> <br>
En faisant tableauNotes[0]=new Note("Jhone","DOE",18);<br>
La classe listeNotes contiendra en plus un entier nbmax qui sera la taille réele du la classe listeNotes contiendra en plus un entier 
nb qui sera le nombre d'éléments contenus dans la liste. 
tableau et un entier nb qui sera le nombre déléments contenus dans la liste.
au départ (donc dans le constructeur),demande à l'utilisateur combien de notes il veut rentrer.On peut alors rajouter des élement dans la liste 
<br>
<b>- void ajoutNote(string,string,int)</b><br>
<b>- void afficheListe()</b><br>
<b>- void Reinitialise Tableau()</b><br>
<b>menu :</b><br>
0. ajouter un note .
1. afficher la liste des notes 
2. refaire une novelle liste 
3. affiche la moyenne des notes
4. exit
