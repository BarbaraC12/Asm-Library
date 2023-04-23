# Bonus subject from piscine:

## ft_list_remove_if

Ecrire la fonction ft_list_remove_if qui efface de la liste tous les éléments dont la donnée comparée à data_ref à l’aide de cmp, fait que cmp renvoie 0.
- Elle devra être prototypée de la façon suivante:  
`void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));`
- La data d’un élément à effacer devra aussi être libèrée à l’aide de free_fct

## ft_list_push_front

Ecrire la fonction ft_list_push_front qui ajoute au début de la liste un nouvel élément de type t_list.
- Elle devra être prototypée de la façon suivante:  
`void ft_list_push_front(t_list **begin_list, void *data);`
- Elle devra assigner data au paramètre fourni.
- Elle mettra à jour, si nécéssaire, le pointeur sur le début de liste.

## ft_list_size

Ecrire la fonction ft_list_size qui renvoie le nombre d’éléments dans la liste.
- Elle devra être prototypée de la façon suivante:  
`int ft_list_size(t_list *begin_list);`

## ft_list_sort

Ecrire la fonction ft_list_sort qui trie par ordre croissant le contenu de la liste, en comparant deux éléments grâce à une fonction de comparaison de données des deux éléments.
- Elle devra être prototypée de la façon suivante:  
`void ft_list_sort(t_list **begin_list, int (*cmp)());`
- La fonctions pointée par cmp sera utilisée de la façon suivante:  
`(*cmp)(list_ptr->data, other_list_ptr->data);`

## ft_atoi_base

Ecrire une fonction qui convertit le début de la chaîne pointée par str en entier de type int.
- Elle devra être prototypée de la façon suivante:  
`int ft_atoi_base(char *str, char *base);`
- str est dans une base specifique passée en second argument de la fonction.
- A part le système de base, cette fonction doit reproduire le comportement de ft_atoi.
- Si un paramètre contient une erreur la fonction renvoie 0. Une erreur peut être:
  - la base est vide ou est de taille 1;
  - la base contient deux fois le même caractère;
  - la base contient les caractères + ou - ou des whitespaces;