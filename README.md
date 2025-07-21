# 🖨️ ft_printf

**ft_printf** est un projet de l'école 42 qui consiste à recréer la fonction `printf` du langage C.  
L'objectif est de maîtriser la gestion des arguments variables, la manipulation des chaînes et le formatage des sorties, tout en respectant un comportement identique à la fonction originale.

---

## 📑 Sommaire
- [📘 Description](#-description)
- [⚙️ Fonctionnalités](#-fonctionnalités)
- [📂 Structure du projet](#-structure-du-projet)
- [💻 Compilation et Utilisation](#-compilation-et-utilisation)
- [📋 Aperçu des Conversions](#-aperçu-des-conversions)
- [🔗 Ressources](#-ressources)

---

## 📘 Description

Le projet **ft_printf** consiste à implémenter une version personnalisée de la fonction `printf` standard, capable de formater et d’afficher du texte, des nombres et d’autres types de données.  
Une fois complété, il peut être utilisé comme une alternative portable à `printf` dans des projets C.

---

## ⚙️ Fonctionnalités

- 🔧 Gestion des **arguments variadiques** avec `va_list`  
- 🧵 Support des conversions classiques de `printf`  
- 📜 Affichage formaté (chaînes, entiers, hexadécimaux, pointeurs)  
- 📚 Base réutilisable dans d'autres projets (par ex. **so_long**, **pipex**, etc.)

---

## 📂 Structure du projet

Le projet est organisé en plusieurs parties :  
- **ft_printf.c** – Point d’entrée principal contenant la fonction `ft_printf`.  
- **utils/** – Fonctions utilitaires (conversion en hexadécimal, affichage de nombres, etc.).  
- **includes/** – Contient le fichier d’en-tête `ft_printf.h`.  

---

## 💻 Compilation et Utilisation

Pour compiler la bibliothèque, exécutez la commande :  

```bash
make
