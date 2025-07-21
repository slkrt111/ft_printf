# 🖨️ ft_printf

## 📖 Description
**ft_printf** est un projet de l'école 42 dont le but est de recréer une version personnalisée de la fonction `printf` de la bibliothèque standard C.  
L’objectif est de comprendre la gestion des arguments variables, la mise en forme des chaînes de caractères, et d’apprendre à manipuler des conversions complexes.

---

## 🧩 Fonctionnalités
1. **Conversion de base**
   - `%c` : Affiche un caractère.  
   - `%s` : Affiche une chaîne de caractères.  
   - `%p` : Affiche un pointeur au format hexadécimal (préfixé de `0x`).  
   - `%d` / `%i` : Affiche un entier signé en base 10.  
   - `%u` : Affiche un entier non signé en base 10.  
   - `%x` / `%X` : Affiche un entier non signé en base 16 (en minuscules ou majuscules).  
   - `%%` : Affiche le caractère `%`.  

2. **Gestion des arguments variables**
   - Utilisation de `va_list`, `va_start`, `va_arg` et `va_end` pour récupérer les arguments.  

3. **Écriture**
   - Affichage via `write()` directement sur la sortie standard.

---

## 📂 Arborescence du projet
```bash
ft_printf/
│── ft_printf.h
│── ft_printf.c
│── utils/
│── Makefile
└── README.md
