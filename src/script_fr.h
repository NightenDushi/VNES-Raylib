//-----Visual Novel content !! °˖✧◝(⁰▿⁰)◜✧˖°

#define LABELS_NUMBERS 10
#define CHARACTER_NUMBER 2
// #define MAX_EXPRESSION 2
#define FLAGS_NUMBER 1


extern CHARA CharaList[CHARACTER_NUMBER] = { //This is a bad idea but that work for now //Or is it ?
      {.key="A", .name="Ange", .image_name="ange", .color_name=DARKBLUE},
      {.key="B", .name="Bange", .image_name="ange"},

};

extern BACKGROUND Background = {
      .images={ /*Only PNG for now*/
            "bg_rose","bg_rouge" 
      }
};

extern FLAGS FlagList[FLAGS_NUMBER] = {
      {.key="LOVE", .value=0}
};

extern Music_list MusicList = {
      .music_name = {
            "nichijou1","nichijou2" //TODO: being able to specify the file extension (optionnal argument)
      }
};

extern Sound_list SoundList = {
      .sound_name = {
            "beep1"
      }
};

extern Passage SCRPT[] = {
{LABEL,"START"},
      // {N, "En cette fin d'apres-midi,\ntu marches sur la plage."},
      // {N, "Il y a peu de monde ici.\nC'est calme."},
      // {N, "Rythme par le son de la mer,\ntu avances sur le sable."},

      {MUSIC,"play"},
      {N, "Tu trouves enfin la personne\nque tu cherchais."},
      {CFLAGS, "LOVE 1"},
      {SWPM,"A 1"},
      // {MUSIC,"nichijou2"},
      // {MUSIC,"play"},
      {H, "A"},
      {SOUND, "beep1"},
      {N, "A Ah, tu es là!"},
      {MUSIC,"pause"},
      // {CJUMP, "LOVE == 0 cava"},
      // {CJUMP, "LOVE > 0 cava"},
      {MOV, "A 400"},
      {SWPM,"A 0"},
      {BG, "bg_rouge"},
      {N, "A Ca me fait plaisir de te voir,\ntu vas bien?"},
      {MOV, "A center"},
      {MUSIC,"resume"},
      {C,"deep_conversation excuse_retard reproches1 deep_conversation "},

  //> "Oui ca va! Et toi ?"},
{LABEL,"cava"},
      {SWPM,"A 1"},
      {N, "A Moi aussi je vais bien,\ntres bien meme!"},
      {SWPM,"A 0"},
      {N, "A J'avais un peu peur qu'on\narrive pas a se retrouver,"},
      {SWPEL,"0"},
      {SWPER,"0"},
      {N, "A mais finalement il n'y avait\npas a s'inquieter!"},
      {J,"Mer1"},

  //> "Desole du retard"
{LABEL,"retard"},
      {SWPM,"4"},
      {SWPEL,"1"},
      {SWPER,"1"},
      {N, "A Ne t'excuse pas, tu es la\nc'est l'essentiel!"},
      {SWPM,"1"},
      {SWPEL,"0"},
      {SWPER,"0"},
      {N, "A Et j'ai pu profiter du\npaysage en attendant!"},
      {J,"Mer1"},

  //> "C'etait dur de te trouver"
{LABEL,"durtrouver"},
      {SWPM,"4"},
      {SWPEL,"3"},
      {SWPER,"3"},
      {N, "A Haha, mes indications etaient\nsi vagues que ca?"},
      {SWPM,"1"},
      {SWPEL,"9"},
      {SWPER,"10"},
      {N, "A Desole, je ne connais pas\nbeaucoup la region."},
      {SWPM,"4"},
      {SWPEL,"0"},
      {SWPER,"0"},
      {N, "A Mais je trouvais cette plage\npas trop mal."},
      {SWPM,"1"},
      {N, "A Au moins ici on est au calme!"},
  
{LABEL,"Mer1"},
      {SWPEL,"6"},
      {SWPER,"6"},
      {N, "Son attention se porte alors\nsur la mer."},
      {N, "Elle est calme, reguliere,\net s'etend a perte de vue."},
      {SWPEL,"3"},
      {SWPER,"3"},
      {N, "A C'est beau,\ntu ne trouves pas?"},
      {C, "1"}, 
  
  //> "Oui, c'est tres joli!"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Je vois que tu apprecies la     vue autant que moi!"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "Si je le pouvais je resterais   ici toute ma vie."},
  {SWPEL,"3"},
  {SWPER,"3"},
  {SWPM,"4"},
  {A, "Bon ca serait pas tres          confortable a la longue,"},
  {J,"77"},

  //> "Bof, c'est la mer quoi."},
  {SWPEL,"3"},
  {SWPER,"6"},
  {SWPM,"4"},
  {A, "Hehe, tu n'as toujours pas une  ame d'artiste."},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Et c'est pas grave, tu as le    droit de trouver ca banal."},
  {SWPM,"1"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "Apres tout, c'est un peu        absurde de s'y attarder ici."},

  {SWPM,"1"},
  {SWPEL,"1"},
  {SWPER,"1"},
  {A, "Mais pour un rendez-vous ca     reste un tres bon endroit."},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Maintenant ma connexion n'est   plus un probleme."},
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Et c'est bien plus chouette     qu'en visio!"},

  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Tiens, maintenant que tu es     la je voulais te demander..."},
  {SWPM,"4"},
  {A, "Tu te souviens de ton projet?   Celui dont tu m'as parle?"},
  {SWPM,"1"},
  {A, "Il avait l'air interessant,     comment ca avance?"},
  {C, "2"},
  
  //> J'en vois le bout!
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Genial! Il y a de quoi etre     fier de soi!"},
  {SWPM,"1"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "Tu sais, j'admire beaucoup      ta determination."},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Tu dis souvent que j'exagere,   mais c'est sincere!"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Rien que de te parler me        motive beaucoup!"},
  {J,"178"},


  //> J'ai du mal a avancer...
  {SWPM,"3"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Oh mince, excuse-moi...         Ca va aller j'espere!"},
  {SWPM,"1"},
  {A, "Surtout ne te rend pas          malade par rapport a ca,"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "C'est normal d'avoir des        periodes de doute."},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Peut-etre que tu as juste       besoin de te reposer!"},
  {SWPM,"1"},
  {A, "Est-ce que tu as pense a        demander de l'aide?"},
  {C, "3"},
    //>Oui
    {SWPM,"4"},
    {SWPEL,"3"},
    {SWPER,"3"},	
    {A, "Super, je penses que tu es sur  la bonne voie!"},
    {SWPEL,"0"},
    {SWPER,"0"},
    {A, "Pense a parler de tes doutes    avec ces personnes,"},
    {SWPM,"1"},
    {A, "Parfois, juste parler aide a    trouver une solution."},
    {SWPEL,"3"},
    {SWPER,"3"},
    {SWPM,"1"},
    {A, "En tout cas c'est ce qui        m'arrive quand on discute!"},
    {J,"178"},

    //>Je sais pas si ça m'aiderait
    {SWPM,"4"},
    {SWPEL,"9"},
    {SWPER,"0"},
    {A, "Tu sais, il y a pas de          honte a demander de l'aide."},
    {SWPM,"1"},
    {SWPEL,"1"},
    {SWPER,"1"},
    {A, "Mais je comprends, c'est        pas toujours facile."},
    {SWPM,"4"},
    {SWPEL,"9"},
    {SWPER,"10"},
    {A, "Je... je veux bien              t'aider si tu veux!"},
    {SWPM,"1"},
    {A, "Mais tu as surement des amis    plus competents que moi!"},
    {SWPM,"1"},
    {SWPEL,"3"},
    {SWPER,"3"},
    {A, "Dans tous les cas ne reste      pas solitaire, promis?"},
    {J,"178"},


  //> Je suis passe a autre chose
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Oh d'accord, excuse moi!"},
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "C'est pas grave, tu as le       droit de changer."},
  {SWPM,"1"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Si on concretisait toutes nos   idees on s'en sortirait pas."},
  {SWPM,"1"},
  {SWPEL,"7"},
  {SWPER,"8"},
  {A,"(meme si je devrais pas          faire totalement l'inverse)"},


  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "D'ailleurs... Je sais pas       si tu t'en souviens..."},
  {SWPM,"4"},
  {A, "Mais recemment tu m'as          encourage a envoyer mon CV."},
  {SWPM,"2"},
  {A, "Je ne pensais pas avoir de      resultat pour etre honnete."},
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Mais quelqu'un a repondu!"},
  {C, "4"},
  
  //>Trop bien!
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Haha, merci beaucoup!           Mais tout n'est pas gagne."},
  {SWPM,"2"},
  {A, "Ils m'ont invite a un           entretien, mais..."},
  {J,"204"},

  //>Qu'est-ce qu'ils t'ont dit?
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Et bien..."},
  {SWPM,"4"},
  {A, "Je crois que j'ai un entretien  d'embauche..."},

  {SWPM,"3"},
  {A, "Mais ca me fait un peu peur."},
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Tu vois, ca fait longtemps      que je n'ai pas travaille."},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "J'ai meme oublie comment se     passent ces entretiens."},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Tu sais en quoi ca consiste     toi?"},
  {C, "5"},
  
  //>C'est juste des questions
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Ah d'accord, ils veulent juste  apprendre a me connaitre?"},
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "C'est un peu comme un           rendez-vous amoureux, hehe"},
  {SWPM,"5"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Mais il faut bien s'habiller    pour un rendez-vous, non?"},
  {SWPM,"2"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Arg, j'ai aucune idee de        ce que je vais mettre!"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Une chemise peut-etre?          Ou un costume c'est mieux?"},
  {J,"281"},

  //>Ils vont pas te manger haha
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Haha, tu as raison. Je me       prends trop la tete."},
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Mais ca reste un moment         important,"},
  {SWPM,"1"},
  {SWPEL,"1"},
  {SWPER,"1"},
  {A, "Je voudrais pas faire           n'importe quoi haha"},
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Par exemple, j'ai lu des        articles sur le sujet,"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {SWPM,"2"},
  {A, "Et ils conseillent de bien      s'habiller, mais j'hesite."},
  {SWPEL,"9"},
  {SWPER,"10"},
  {SWPM,"4"},
  {A, "Je dois vraiment mettre une     chemise? Tu en penses quoi?"},
  {J,"281"},
  
  //>J'ai oublie moi aussi
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Haha, je suis pas la seule      personne dans ce cas."},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Ca me rassure un peu je         t'avoue."},
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Au final ca ne doit pas         etre si complique que ca."},
  {SWPM,"3"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Mais j'ai peur de faire         un truc de travers."},
  {SWPM,"2"},
  {A, "Genre, est-ce que je dois       mettre une... chemise?"},
  {C, "6"},
  
  //>Oui, ca fait serieux
  {SWPM,"1"},
  {SWPEL,"10"},
  {SWPER,"9"},
  {A, "D'accord d'accord, il faut      que j'ai l'air pro!"},
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Si je fais bonne impression     ils me feront confiance."},
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Oui, c'est logique!"},
  {SWPM,"3"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "...maintenant je vais devoir    trouver une chemise."},
  {SWPM,"2"},
  {A, "J'en ai peut-etre une dans      mon placard..."},
  {SWPM,"1"},
  {A, "Elle date, je la ressors que    pour les mariages."},
  {SWPEL,"7"},
  {SWPER,"8"},
  {A, "(et on ne m'invite pas          souvent)"},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Mais ca devrait faire           l'affaire!"},
  {J, "357"},

  //>Non, soit decontract'
  {SWPM,"4"},
  {SWPEL,"1"},
  {SWPER,"1"},
  {A, "Ouf, j'avais peur de devoir     m'habiller en pingouin!"},
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Donc, une tenue plus            decontractee..."},
  {SWPM,"1"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "Hum, je pourrais ressortir      mes tee shirt d'ado."},
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Mais tu ne voulais surement     pas dire ca haha"},
  {SWPM,"1"},
  {SWPEL,"7"},
  {SWPER,"8"},
  {A, "Qu'est-ce qu'ils vont penser    de moi si j'arrive avec ca?"},
  {SWPM,"1"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Je penses devoir faire des      essais avant de me decider."},
  {J, "357"},

  //>Porte ce qui te plait
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Oh, c'est gentil!"},
  {SWPM,"1"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Tu as peut-etre raison, faut    que je me fasse confiance."},
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Mais tu sais, je fais pas tres  attention a ce que je porte."},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Meme ici je porte mon pull      gris, comme tous les jours."},
  {SWPM,"2"},
  {A, "Je n'ai jamais vraiment         reflechi a ce qui me plait."},
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Il faudra que j'experimente     avec ce que j'ai!"},

  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Dis, je pourrai t'envoyer       des photos de mes essais?"},
  {C, "7"},
  
  //>Bien sur!
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Merci! Je savais que je         pouvais compter sur toi!"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Juste un avis exterieur         m'aidera beaucoup a choisir."},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "C'est mieux que de compter      sur mon sens de la mode."},
  {J, "394"},

  //>Je ne saurais pas t'aider
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Mais non, tu exagere!"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Je demande juste ton            avis honnete, c'est tout!"},
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Tu es quelqu'un en qui j'ai     confiance pour ca."},
  {SWPM,"4"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Et si je veux m'embarrasser,    c'est pas devant un styliste"},
  {C, "8"},
          //>Bon, si tu insiste
  	  {SWPM,"4"},
          {SWPEL,"3"},
          {SWPER,"3"},
          {A, "Merci beaucoup! Je te           revaudrai ca!"},
  
  {SWPM,"4"},
  {SWPEL,"1"},
  {SWPER,"1"},
  {A, "Bon, j'arrete de t'embeter      avec mes tracas."},
  {SWPM,"1"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Tu veux faire quelque           chose en particulier?"},
  {C, "20"},
  //>Et si on achetait une glace?
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Oh oui! Tres bonne idee!"},
  {SWPM,"1"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "On dit qu'ils vendent tous      les parfums imaginables ici."},
  {SWPM,"1"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "C'est quoi ton parfum           prefere?"},
  {C, "9"},

  //>Vanille
  {SWPM,"4"},
  {A, "Oh, je vois que tu es           du genre classique!"},
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "C'est exactement comme moi,     j'adore la vanille."},
  {SWPM,"1"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "C'est un gout si doux, qui      chatouille les papilles."},
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Je choisissais toujours ce      parfum etant enfant!"},
  {SWPM,"1"},
  {A, "Et meme adulte d'ailleurs!"},
  {J,"643"},

  //>Chocolat
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"0"},
  {A, "Hehe, chocolat, ca correspond   bien a ton style."},
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "J'aime beaucoup le chocolat,    mais en glace c'est...bizarre."},
  {SWPM,"8"},
  {A, "Comme s'ils utilisaient un      arome totalement different."},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Tu trouves pas? Ou c'est moi    qui me fait des films?"},
    {C, "21"},
    //>Je suis d'accord
    {SWPM,"4"},
    {SWPEL,"3"},
    {SWPER,"3"},
    {A, "Ah! Ca fait plaisir de savoir   que je ne delire pas."},
    {SWPM,"1"},
    {SWPEL,"0"},
    {SWPER,"0"},
    {A, "Mais dans tous les cas tu as    le droit d'aimer!"},
    {J,"643"},
    //>Je penses que c'est des films
    {SWPM,"1"},
    {SWPEL,"1"},
    {SWPER,"1"},
    {A, "C'est fort possible!"},
    {SWPM,"2"},
    {SWPEL,"0"},
    {SWPER,"0"},
    {A, "Peut-etre que je n'ai juste     pas goute les bonnes marques"},
    {SWPM,"4"},
    {A, "Tu m'en recommanderas un de     ces jours!"},
    {J,"643"},

  //>Fruit
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Sympa, et ca correspond bien    a l'ambiance estivale!"},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Il faudrait vraiment que je     manges plus de fruits,"},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Mais alors en glace, ca me      rappelle ma grand-mere."},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Elle m'en offrait a chacune     de mes visites."},
  {SWPM,"1"},
  {SWPEL,"1"},
  {SWPER,"1"},
  {A, "Bon c'etait previsible          au bout d'un moment."},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Mais ca reste de chouettes      souvenirs!"},
  {SWPM,"4"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Oups! voila que je parle        encore trop de moi."},
  {SWPM,"1"},
  {SWPEL,"1"},
  {SWPER,"1"},
  {A, "Excuse moi,                     je le fais pas expres."},
  {J,"643"},

  //>Peu importe
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Oh d'accord, tu n'es pas        tres glace?"},
  {C, "10"},
        //>J'aime tous les parfums
        {SWPM,"4"},
        {SWPEL,"3"},
        {SWPER,"3"},
        {A, "Ah! Te connaissant ca ne        m'etonne pas en effet!"},
        {SWPEL,"0"},
        {SWPER,"0"},
        {A, "On verra bien ce qu'il y a      et ce qui te fait envie."},
  	{J,"643"},
  	//jump ici

        //>Non pas trop
  	{SWPM,"2"},
        {SWPEL,"0"},
        {SWPER,"0"},
        {A, "Oh d'accord..."},
        {SWPM,"4"},
        {SWPEL,"9"},
        {SWPER,"10"},
        {A, "Je comprends, tu proposais      ca pour me faire plaisir?"},
  	{SWPM,"1"},
        {A, "C'est gentil, mais tu as pas    a te forcer tu sais."},
        {SWPEL,"3"},
        {SWPER,"3"},
        {A, "Oublions les glaces, mais       merci d'avoir propose!"},
        {SWPM,"4"},
        {SWPEL,"0"},
        {SWPER,"0"},
        {A, "Et puis, on est tres bien       sur la plage, pas vrai?"},
        {SWPM,"1"},
        {SWPEL,"6"},
        {SWPER,"6"},
        {A, "Je prefere rester ici,          c'est plus calme."},
        {SWPM,"1"},
        {SWPEL,"0"},
        {SWPER,"0"},
        {A, "D'ailleurs, tu as vu qu'ils     font une fete en ville?"},
        {N, "En effet, en arrivant tu as     cru entendre de la musique."},
  	{SWPM,"2"},
        {A, "De ce que j'ai compris, c'est   un grand festival annuel."},
        {SWPM,"1"},
        {SWPEL,"9"},
        {SWPER,"10"},
        {A, "Si je peux eviter de me meler   a la foule, c'est mieux."},
  	{N, "En portant ton attention, tu    repere mieux les sons de la     ville."},
        {N, "D'ici, vous entendez des        chants et des bruits festifs"},
        {N, "Il doit y avoir beaucoup de     monde la bas."},
        {N, "Et c'est peut-etre pour ca      que la plage est deserte."},
        {SWPM,"2"},
        {SWPEL,"0"},
        {SWPER,"0"},
        {A, "Tu as du mal avec la foule      toi?"},
 	{C, "11"},
        //>Oui, je ne supporte pas
        {SWPM,"1"},
        {SWPEL,"3"},
        {SWPER,"3"},
        {A, "Tu es un peu comme moi alors."},
        {SWPM,"2"},
        {SWPEL,"9"},
        {SWPER,"10"},
        {A, "Il m'arrive de stresser rien    qu'en y pensant."},
        {SWPEL,"6"},
      	{SWPER,"6"},
        {A, "Sortir de chez moi est deja     un challenge,"},
        {SWPM,"3"},
        {SWPEL,"0"},
        {SWPER,"0"},
        {A, "Alors faire la fete, impossible d'y aller en vrai."},
  	{SWPM,"2"},
        {A, "Mais c'est pas vraiment         la meme chose ici."},
        {SWPM,"4"},
        {A, "Et puis tu es la,               on peut se soutenir!"},
	{J,"904"},
  
        //>Ca me derange pas vraiment
        {SWPM,"4"},
        {SWPEL,"0"},
        {SWPER,"0"},
        {A, "Ca te pose pas de problemes     particuliers? C'est chouette!"},
        {SWPM,"2"},
  	{A, "Je veux dire, j'aimerais bien   etre comme toi."},
  	{SWPM,"1"},
        {SWPEL,"9"},
	{SWPER,"10"},
  	{A, "Pas forcement aimer ca, mais    etre plus neutre."},
  	{SWPM,"2"},
        {A, "Ne pas stresser juste a l'idee  de voir des gens..."},
  	{SWPM,"3"},
        {SWPEL,"6"},
      	{SWPER,"6"},
        {A, "..."},
        {SWPM,"3"},
        {SWPEL,"0"},
        {SWPER,"0"},
        {A, "Excuse moi."},
  	{SWPM,"1"},
        {SWPEL,"1"},
        {SWPER,"1"},
        {A, "Beaucoup de choses me font      stresser de toute facon,"},
        {SWPM,"1"},
        {SWPEL,"0"},
        {SWPER,"0"},
  	{A, "je crois que tu commences a     me connaitre!"},
  	{SWPM,"2"},
        {A, "Je suis comme ca, j'ignore      si je changerais un jour."},
        //{A, "Mais cette raison que je suis   bien en ta compagnie."}, //Line à supprimer ? Doublon
        //{A, "Tu m'acceptes, meme quand       j'ai du mal a le faire."},
        //{A, "Et ca me fait du bien."},
  	{J,"904"},

        //>J'adore la foule!
  	{SWPM,"4"},
        {SWPEL,"3"},
        {SWPER,"3"},
        {A, "Vraiment? C'est dingue ca!"},
  	{SWPM,"1"},
        {A, "C'est vrai que tu vas souvent   faire la fete."},
        {SWPEL,"9"},
        {SWPER,"10"},
        {A, "Enfin plus que moi ca           c'est sur!"},
        {SWPM,"4"},
        {SWPEL,"0"},
        {SWPER,"0"},
        {A, "Tu as l'esprit festif, c'est    surement une bonne chose."},
        {SWPM,"1"},
        {SWPEL,"1"},
        {SWPER,"1"},
  	{A, "Je suis un peu a l'oppose."},
  	{SWPM,"4"},
        {SWPEL,"0"},
        {SWPER,"0"},
        {A, "Mais tu sais, c'est ce que      j'aime avec notre amitie."},
  	{SWPM,"1"},
        {SWPEL,"6"},
        {SWPER,"6"},
        {A, "On est des personnes si         differentes,"},
        {SWPEL,"3"},
        {SWPER,"3"},
        {A, "mais on se comprend."},
  	{SWPM,"4"},
        {SWPEL,"0"},
        {SWPER,"0"},
        {A, "C'est tres enrichissant,        tu ne trouves pas?"},
        {SWPM,"1"},
        {SWPEL,"6"},
        {SWPER,"6"},
        {A, "Puis j'aurais du mal a trouver  des personnes comme moi."},
  	{SWPM,"2"},
        {A, "Enfin, je crois..."},
  	{J,"904"},//TODO CHANGE VALUE LATER

  //---

  {SWPM,"4"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Euh, par contre                 je dois t'avouer..."},
  {SWPM,"1"},
  {SWPEL,"7"},
  {SWPER,"8"},
  {A, "Je n'ai pas vraiment d'argent   sur moi."},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Vraiment, excuse moi!"},
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Tu vois, j'ai du acheter de     l'equipement pour ma maison."},
  {SWPM,"4"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Et du coup... c'est un peu      ric rac en ce moment."},
  {SWPM,"1"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Ca te derange de m'avancer?"},
  {C, "12"},
  
  //>Je comptais te l'offrir
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "V... vraiment?"},
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Merci beaucoup! C'est           trop gentil de ta part."},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Promis, des que je peux         je te rendrai la pareille!"},
  {J, "714"},

  //>Penses a me rembourser
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Oui! Tu as ma parole!"},
  {SWPM,"1"},
  {A, "Les bon comptes font            les bons amis apres tout."},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Et c'est deja tres gentil       a toi de m'avancer!"},
  {SWPM,"4"},
  {A, "Promis, dans quelques jours     je pourrai te rembourser."},
  {J, "714"},

  //>Franchement, t'abuses
  {SWPM,"4"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Haha, pardon, je sais que       c'est pas la premiere fois."},
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Mais apres tout c'est toi qui   a propose la glace!"},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Aller ! C'est promis,           c'est la derniere."},
  {C, "22"},
  //>La derniere?
  {SWPM,"1"},
  {SWPEL,"10"},
  {SWPER,"9"},
  {A, "La derniere! Parole d'Ange!"},
  {SWPM,"1"},
  {SWPEL,"7"},
  {SWPER,"8"},
  {A, "(si j'arrete de craquer sur     des bibelots...)"},
  {J, "714"},

  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Allons-y!"},
  {H, "hide"},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {N, "Vous avancez tranquillement     vers la ville cotiere."},
  {N, "Une musique festive vient       a vos oreilles."},
  //{N, "Vous entendez le sifflement     de fusees et de confettis."},//

  {N, "C'est bien l'epoque du          festival annuel,"},
  {N, "et la foule s'en donne          a coeur joie."},
  {N, "Tu t'assures qu'Ange est        toujours derriere toi."},
  {H, "show"},
  {A, "Ne t'en fais pas...             je te suis!"},
  {H, "hide"},
  {N, "Tu progresses dans la ville en  direction du stand de glace."},
  {N, "Autour de vous volent           confettis et feux d'artifice."},
  {N, "Le gros de la foule danse sur   la place principale."},
  {N, "Tu comprends mieux pourquoi     la plage etait si vide."},
  {N, "Tu arrives enfin a la boutique  de glace."},
  {N, "Apres inspection du menu,       tu te tournes vers Ange."},
  {C, "13"},
  
  //>Tout me fait envie!
  //>Prends ce que tu veux
  //>C'est vraiment cher!
  //>Tu veux pas une crepe plutot?

  {N, "Mais en te retournant,          tu ne vois personne."},
  {N, "Ange n'est plus derriere toi."},
  {N, "Tu sors rapidement de la        boutique."},
  {N, "Personne."},
  {N, "Misere, Ange t'a surement       perdu en chemin."},
  {N, "L'esprit plein d'inquietude,    tu entames tes recherches."},
  {C, "14"},
  
  //>Demander a un passant
  {N, "Tu interpelles un passant,      esperant avoir des info."},
  {N, "\"Quelqu'un avec un pull gris?   Ici c'pas commun haha\""},
  {N, "\"Maintenant tout le monde porte la collection estivale!\"" },
  {N, "\"La classe pas vrai? Attends    de voir ma nouvelle dance!\"" },
  {N, "\"Il survivra ton pull gris,     viens faire la fete!\""},
  {N, "Ce type etait sympathique,      mais ne t'a pas avance."},
  {N, "Les gens ici sont trop occupes  a faire la fete pour t'aider."},
  {C, "14"},

  //>Chercher dans la foule
  {N, "Si Ange t'a perdu, c'est        surement a cause de la foule."},
  {N, "Bravement, tu te glisses entre  les danseurs a sa recherche."},
  {N, "Tu vois bien que tu genes,      mais c'est au nom de l'amitie."},
  {N, "Sur la place, tu grimpes sur    la fontaine centrale."},
  {N, "Te surelever t'aidera plus      dans tes recherches."},
  {N, "Tu surplombes la foule du       regard, mais sans succes."},
  {N, "Pourtant ses vetements gris     sont facilement reperables,"},
  {N, "Surtout dans la maree de        costumes colores."},
  {N, "Tu scrutes une derniere fois    la foule, au cas ou."},
  {N, "Mais tu te resous finalement a  changer de strategie."},
  {C, "14"},

  //>Retourner sur la plage
  {N, "Tu rebrousses chemin jusqu'a    la plage."},
  {N, "Peut-etre qu'Ange est quelque   part sur la route."},

  {N, "Tu fais attention a regarder    partout autour de toi."},
  {N, "Inspectant ruelles et detours   au cas ou Ange y serait."},
  {N, "Tu sors de la ville,            et toujours aucune trace."},
  {N, "Mais de retour sur la plage,    tu retrouves un visage familier."},
  {H, "show"},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Ah, tu es la!"},
  
  {C, "15"},
  //>Non c'est toi qui est la!
  {SWPM,"3"},
  {A, "Oh non, tu me cherchais         c'est ca?"},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Excuse-moi...                   je ne voulais pas t'inquieter."},
  {SWPM,"2"},
  //{A, "Je me suis senti mal           au milieu de la foule."},
  {A, "C'est que... au milieu de la    foule j'etais pas bien..."},
  {J,"801"},	
  
  //>Qu'est-ce qui s'est passe?
  {SWPM,"3"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Et bien...au milieu de la       foule, j'etais pas tres bien."},
  {J,"801"},

  //>Tu vas bien?
  {SWPM,"4"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Oui, ca vas, ne t'inquiete      pas pour moi!"},
  {SWPM,"1"},
  {SWPEL,"1"},
  {SWPER,"1"},
  {A, "En tout cas je vais mieux       maintenant!"},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "C'est juste que... la foule     c'est pas trop mon truc."},

  {SWPM,"2"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "Je savais pour le festival,     mais je le pensais plus..."},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "petit. Je pensais pas voir      autant de monde ici."},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Le bruit m'a distrait, et       quelqu'un m'a bouscule."},
  {SWPM,"1"},
  {A, "ca a suffit pour que je te      perde de vue."},
  {SWPM,"4"},
  {SWPEL,"1"},
  {SWPER,"1"},
  {A, "Mais heureusement               j'ai l'habitude!"},
  {C, "16"},
  
  //>L'habitude?
  {SWPM,"1"},
  {SWPEL,"7"},
  {SWPER,"8"},
  {A, "Oui, enfant j'avais la manie    de me perdre au supermarche."},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Ca arrivait a chaque fois que   quelque chose me distrayait"},
  {SWPM,"3"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Des que je regardais ailleurs,  ma mere avait disparu."},
  ////>C'est pour ca que tu es revenu?
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  //{A, "C'est ca, c'est ma mere qui     me l'as appris!"},
  {A, "Donc elle m'a appris quoi       faire en cas de probleme:"},
  {SWPM,"4"},
  {SWPEL,"1"},
  {SWPER,"1"},
  {A, "Revenir a la caisse centrale    et attendre maman!"},
  {SWPM,"1"},
  {SWPEL,"7"},
  {SWPER,"8"},
  {A, "Enfin ici c'est un image hein!  hehe"},
  {C, "17"},
  
  //>Tu as prit de bonnes habitudes
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Haha, si on peut appeler ca     comme ca!"},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "C'est vrai que grace a ca       on a pu se retrouver."},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Encore pardon, la prochaine     fois je ferai attention!"},
  {J,"892"},

  //>Au final, on a pu se retrouver
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Oui, c'est l'essentiel!"},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Encore pardon de t'avoir fait   soucis!"},
  {J,"892"},

  //>Tu parles peu de ta mere
  {SWPM,"2"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Oh... euh..."},
  {SWPM,"1"},
  {A, "T-tu trouves? Je vois pas       pourquoi en parler plus..."},
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Je crois que je parles          beaucoup de ma vie deja."},
  {SWPM,"5"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Ca te derange pas vrai? Je      ferais plus attention!"},
  {SWPM,"3"},
  {A, "Je m'excuse, c'etait stupide    de raconter ce genre de cho-"},
  {C, "18"},
    //>Ce n'est rien
    {SWPM,"1"},
    {SWPEL,"9"},
    {SWPER,"10"},
    {A, "Ah... d'accord..."},
    {SWPEL,"7"},
    {SWPER,"8"},
    {A, "Je crois que mes emotions       ont encore pris le dessus..."},
    {SWPM,"4"},
    {SWPEL,"9"},
    {SWPER,"10"},
    {A, "Parlons d'autre chose,          si tu veux bien."},

  {SWPM,"5"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Bah d'ailleurs, au final        on a toujours pas nos glaces!"},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "C'est bete, on aura fait        cette expedition pour rien"},
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Mais c'est pas tres grave,      ce sera pour une autre fois!"},

  {SWPM,"1"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {N, "Son attention se porte de       nouveau vers l'horizon."},
  {N, "Le jour est a present bien      avance,"},
  {N, "et le soleil descend            progressivement dans le ciel."},
  {N, "Ses rayons se refletent         etrangement sur l'eau bleue."},
  {N, "C'est vraiment un beau          spectacle."},
  {N, "Soudain, Ange remarque          quelque chose a l'horizon."},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Oh regarde! Il y a un bateau    la bas!"},
  {SWPM,"1"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Je me demande a qui il          appartient."},
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Ce doit etre chouette d'avoir   sa maison sur l'eau."},
  {SWPM,"1"},
  {A, "Je pourrais voyager sans        sortir de chez moi haha"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "Un jour peut-etre..."},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Tu aimes voyager toi?"},
  {C, "19"},
  
  //>Oui, partout dans le monde!
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Woah, tu as vraiment le gout    de l'aventure!"},
  {SWPM,"1"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Il doit y avoir tant a voir     dans le monde."},
  {SWPM,"4"},
  {A, "J'aime en apprendre plus en     regardant des documentaires,"},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Mais je suis sur qu'il y a      beaucoup plus a decouvrir."},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "Je te l'ai surement deja dit,   mais je t'envie beaucoup."},
  {SWPEL,"0"},
  {SWPER,"0"},
  {SWPM,"4"},
  {A, "C'est comme si tu vivais plus   que moi..."},
  {J,"993"},

  //>Oui mais proche de chez moi
  {SWPM,"1"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "C'est pas bete, il y a de       beaux endroits vers chez toi."},
  {SWPM,"2"},
  {A, "Je me demande ce qu'il y a      dans ma region."},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "Je n'en n'ai jamais cherche,    mais il y en a surement."}, //fall flat
  {SWPM,"4"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Je pense que je ferais ca       si je me decide a voyager."},
  {SWPM,"1"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Au moins je peux rentrer        chez moi n'importe quand."},
  {J,"993"},

  //>Non pas du tout
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Oh, donc tu es un peu           comme moi."},
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "C'est vrai qu'on est bien       chez soi, dans son cocon."},
  {SWPM,"1"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "Si je le pouvais, je ne         sortirais jamais."},
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Mais je devrais pas faire       ca toute ma vie, pas vrai?"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "Il faudra bien que je me        reprenne en main."},


  //main and last branch
  {SWPM,"2"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "J'espere un jour avoir un       peu plus de courage."},
  {SWPM,"1"},
  {A, "Tu le sais, meme une rencontre  ici me fait stresser."},
  {SWPM,"2"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Des fois, je me demande         ce que je vais devenir."},
  {SWPM,"3"},
  {A, "Des fois, je é¤ £"},
  {SWPM,"2"},
  {SWPEL,"6"},
  {SWPER,"6"},
  {A, "..."},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Excuse moi, c'est encore        mes emotions."},
  {SWPM,"2"},
  {A, "Tu sais, je ne sais pas         pourquoi tu restes avec moi."},
  {SWPM,"4"},
  {A, "Je ne suis pas une personne     tres interessante."},
  {SWPM,"2"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Juste une petite chose qui      essaye de traverser la vie."},
  {SWPM,"1"},
  {SWPEL,"1"},
  {SWPER,"1"},
  {A, "Mais tu es toujours la pour     ecouter, me conseiller."},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "On a certes des differences,    mais toi au moins..."},
  {SWPM,"1"},
  {SWPEL,"1"},
  {SWPER,"1"},
  {A, "..."},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "C'est pour ca que j'aime        autant ta compagnie."},
  {SWPM,"1"},
  {SWPEL,"9"},
  {SWPER,"10"},
  {A, "Tu m'acceptes, meme quand       j'ai du mal a le faire."},
  {SWPM,"1"},
  {SWPEL,"3"},
  {SWPER,"3"},
  {A, "Et ca me fais du béen... "},
  {SWPM,"4"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Hey, ca tµ dirait d'alle-  ramasser des coqvi'£lag-s?"},
  {SWPM,"3"},
  {SWPEL,"0"},
  {SWPER,"0"},
  {A, "Pô urquoi tu faà ct - tete?"},
  {SWPM,"11"},
  {SWPEL,"11"},
  {SWPER,"11"},
  {A, "....é£;...."},
  {H, "hide"},
  {N, "   "},
  {N, "Connexion perdue..."},
  {N, "Ange s'est deconnecte"}
};

extern const Choice ListeChoix[]= {
  {"deep_conversation","Oui ca va! Et toi?","cava"},
  {"excuse_retard","Desole du retard","retard"},
  {"reproches1","C'etait dur de te trouver","durtrouver"},
  
  {"oui_mer","Oui, c'est tres joli!","cava"},
  {"non_mer","Bof, c'est la mer quoi.","retard"},


  
//   {"J'en vois le bout!",97},
//   {"J'ai du mal a avancer...",113},
//   	{"Oui",129},
//   	{"Je sais pas si ca m'aiderait",143},
//   {"Je suis passe a autre chose",162},
  
//   {"Trop bien!",191},
//   {"Qu'est-ce qu'ils t'ont dit?",198},
  
//   {"C'est juste des questions",218},
//   {"Ils vont pas te manger haha",238},
//   {"J'ai oublie moi aussi",263},
  
//   {"Oui, ca fait serieux",282},
//   {"Non, soit decontract'",310},
//   {"Porte ce qui te plait",335},
  
//   {"Bien sur!",362},
//   {"Je ne saurais pas t'aider",374},
// 	  {"Bon, si tu insistes",390},
  
//   {"Vanille",416},
//   {"Chocolat",433},
//   {"Fruit",468},
//   {"Peu importe",499},
//   	{"J'aime tous les parfums",504},
//   	{"Non pas trop",512},
  
//           {"Oui, je ne supporte pas",554},
//           {"Ca me derange pas vraiment",573},
//           {"J'adore la foule!",604},
//   //--Branche glace
//   {"Je comptais te l'offrir",667},
//   {"Penses a me rembourser",680},
//   {"Franchement, t'abuses",692},
  
//   {"Tout me fait envie!",737},
//   {"Prends ce que tu veux",737},
//   {"C'est vraiment cher!",737},
//   {"Tu veux pas une crepe plutot?",737},
  
//   {"Demander a un passant",744},
//   {"Chercher dans la foule",752},
//   {"Retourner a la plage",763},
  
//   {"Non c'est toi qui est la!",775},
//   {"Qu'est-ce qui s'est passe?",784},
//   {"Tu vas bien?",789},
  
//   {"L'habitude?",818},
//   {"Et donc tu m'as attendu ici",1},
  
//   {"C'est un bon reflexe",842},
//   {"Au final on a pu se retrouver",855},
//   {"Tu parles peu de ta mere",864},
//   	{"Ce n'est rien",881},
  
  
//   //--Main and last branch (?)
//   {"Oui, partout dans le monde!",935},
//   {"Oui mais proche de chez moi",956},
//   {"Non pas du tout",974},
  
//   {"Et si on achetait une glace?",403},
  
//   {"Je suis d'accord",448},
//   {"Je pense que c'est des films",457},
  
//   {"La derniere?",705},

  
  
  
};

// extern const char ChoiceCollection[][5] = {
//   //{nb_choix,nchoix,...};
//   {3,0,1,2},
//   {2,3,4},
//   {3,5,6,9},
//     {2,7,8},
//   {2,10,11},
  
//   {3,12,13,14},
//   {3,15,16,17},
  
//   {2,18,19},
//   	{1,20},
  
//   {4,21,22,23,24}, //vanille, chocolat...
//   	{2,25,26},
//  		{3,27,28,29}, //branche glace-less
//   {3,30,31,32},
  
//   {4,33,34,35,36},
  
//   {3,37,38,39},
  
//   {3,40,41,42},
  
//   {1,43,43}, //
  
//   {3,46,45,47}, 
//     {1,48},
//   {3,49,50,51},//où tu veux voyager
  
//   {1,52}, //et si on achetait une glace?
//   {2,53,54}, //je suis d'accord/je penses que c'est des films
//   {1,55}, //La dernière ?
// };