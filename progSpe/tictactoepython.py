tableau_jeu=[   [None,None,None],
                [None,None,None],
                [None,None,None]    ]

def placement_signe(tableau_jeu):
    signe=str(input("Vous jouez les X ou les O ?"))                 #on regarde quel signe joue le joueur

    print("Où voulez vous jouer ?")                                 #on veut savoir où il va jouer et on stock ses réponses
    print('    A      B    C')  
    print('1',tableau_jeu[0])
    print('2',tableau_jeu[1])
    print('3',tableau_jeu[2])
    emplt_colonne=str(input("Quelle colonne ? A, B ou C ?"))
    emplt_ligne=int(input("Quelle ligne ? 1, 2 ou 3 ?"))
    #on remplace les lettre par des chiffres, plus faciles a manipuler
    if emplt_colonne == 'A':
        emplt_colonne = 0
    if emplt_colonne == 'B':
        emplt_colonne = 1
    if emplt_colonne == 'C':
        emplt_colonne = 2
    tableau_jeu[emplt_ligne-1][emplt_colonne] = signe           
    return tableau_jeu                             

def verification(tableau_jeu,signe_tester):         #désolé, c'est très long. J'ai tenté de le raccourcir avec des boucles et tout mais j'ai pas réussi :c
    
    #colonnes
    if tableau_jeu[0][0]==signe_tester and tableau_jeu[1][0]==signe_tester and tableau_jeu[2][0]==signe_tester:
        return True
    if tableau_jeu[0][1]==signe_tester and tableau_jeu[1][1]==signe_tester and tableau_jeu[2][1]==signe_tester:
        return True
    if tableau_jeu[0][2]==signe_tester and tableau_jeu[1][2]==signe_tester and tableau_jeu[2][2]==signe_tester:
        return True
   
    #lignes    
    if tableau_jeu[0][0]==signe_tester and tableau_jeu[0][1]==signe_tester and tableau_jeu[0][2]==signe_tester:
        return True
    if tableau_jeu[1][0]==signe_tester and tableau_jeu[1][1]==signe_tester and tableau_jeu[1][2]==signe_tester:
        return True
    if tableau_jeu[2][0]==signe_tester and tableau_jeu[2][1]==signe_tester and tableau_jeu[2][2]==signe_tester:
        return True
    
    
    #diagonales
    if tableau_jeu[0][0]==signe_tester and tableau_jeu[1][1]==signe_tester and tableau_jeu[2][2]==signe_tester:
        return True
    if tableau_jeu[2][0]==signe_tester and tableau_jeu[1][1]==signe_tester and tableau_jeu[0][2]==signe_tester:
        return True
    return False

def tableau_rempli(tableau_jeu):            #renvoie True si le tableau est pleins
    for i in range(0,3):
        for j in range(0,3):
            if tableau_jeu[i][j] == None:
                return False
    return True

def Tic_tac_toe():
    while tableau_rempli(tableau_jeu) == False :        #condition d'arret pour le jeu, si tous les emplacements sont remplis
        placement_signe(tableau_jeu)

        if verification(tableau_jeu,'X') == True:
            print("Le joueur aux X a gagné :")
            break
        if verification(tableau_jeu,'O') == True:
            print("Le joueur aux O a gagné !")
            break

    if tableau_rempli(tableau_jeu) == True :
        print("Personne n'a gagné ; Egalité ! ")

print(Tic_tac_toe())