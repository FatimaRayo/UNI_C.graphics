#include<graphics.h>
#include<conio.h>


void main()
{

    int driver=VGA,modo=VGAHI;

    /*columna azul izquierda*/

    int azul_frente[] = {225,48,261,18,270,24,270,427,238,427,225,425,123,406,123,396,225,399};
    int pimer_espacio_ventanasuperior[] = {238,65,261,49,269,54,269,65};
    int pimer_espacio_ventanainferior[] = {238,65,269,65,269,92,261,88,238,103};
    int segundo_espacio_ventanasuperior[] = {238,133,261,120,269,124,269,133};
    int segundo_espacio_ventanainferior[] = {238,133,269,133,269,167,261,163,238,174};
    int tercer_espacio_ventanasuperior[] = {238,206,261,196,269,199,269,206};
    int tercer_espacio_ventanainferior[] = {238,206,269,206,269,242,261,240,238,248};
    int cuarto_espacio_ventanasuperior[] = {238,280,261,273,269,276,269,280};
    int cuarto_espacio_ventanainferior[] = {238,280,269,280,269,319,261,319,238,322};
    int espacio_puerta[] = {238,354,261,352,269,352,269,427,238,427};


    int azuldere[] = {369,24,378,18,414,48,414,399,515,396,515,406,414,425,401,427,369,427};
    int pimer_espacio_superior[] = {401,65,378,49,370,54,370,65};
    int pimer_espacio_inferior[] = {401,65,370,65,370,92,378,88,401,103};
    int segundo_espacio_superior[] = {401,133,378,120,370,124,370,133};
    int segundo_espacio_inferior[] = {401,133,370,133,370,167,378,163,401,174};
    int tercer_espacio_superior[] = {401,206,378,196,370,199,370,206};
    int tercer_espacio_inferior[] = {401,206,370,206,370,242,378,240,401,248};
    int cuarto_espacio_superior[] = {401,280,378,273,370,276,370,280};
    int cuarto_espacio_inferior[] = {401,280,370,280,370,319,378,319,401,322};
    int espacio_puer[] = {401,354,378,352,370,352,370,427,401,427};

    /*Miniventanas NEGRAS que van en las columnas azules del edificio*/
    /*Izquierda*/

    int ventnegra1[]={246,79,262,79,262,89,246,98};
    int ventnegra2[]={246,149,262,149,262,164,246,170};
    int ventnegra3[]={247,221,262,221,262,241,247,245};
    int ventnegra4[]={247,294,262,294,262,319,247,321};
    int ventnegra5[]={247,368,263,368,263,396,247,396};

    /*Derecha*/
    int ventanegra1[]={393,79,377,79,377,88,393,97};
    int ventanegra2[]={377,149,393,149,393,170,377,163};
    int ventanegra3[]={377,221,392,221,392,245,377,241};
    int ventanegra4[]={377,294,392,294,392,321,377,319};
    int ventanegra5[]={377,368,392,368,392,396,377,396};



    /*Pilares*/
    /*Izquierda*/

    int pillar1[] = {1, 138, 2, 406, 123, 406, 123, 130, 107, 123, 107, 93, 56, 72, 29, 115, 1, 138};
    int manchapilar1[] = {25,406,25,112,39,99,80,113,80,406,70,406,70,141,37,132,37,406};
    int venton[]={11,148,18,141,18,180,11,186};
    int venton2[]={11,195,18,189,18,236,11,241};
    int venton3[]={11,251,18,246,18,295,11,298};
    int venton4[]={10,308,18,305,18,360,10,363};


    /*Derecha*/

    int pillar2[] = {610, 115, 640, 138,583, 72,533, 93,533, 123,515, 129, 515, 406,610,406,640, 406,640, 138};
    int manchapilar2[]={573,141,597,133,597,406,610,406,610,115,599,98,561,112,561,406,573,406};
    int vento[]={627,148,621,141,621,180,627,186};
    int vento2[]={627,195,621,189,621,236,627,241};
    int vento3[]={627,251,621,246,621,295,627,298};
    int vento4[]={628,308,621,305,621,360,628,363};




    /*parte de en medio*/

   
    
    int cupula_edificio_gris[]={269,124,293,136,320,128,346,136,370,124,370,156,342,162,320,156,298,162,269,156};
    int triangulosuperior[]={293,136,320,111,346,136,320,128};
    

    int rectangulomedio[]={298,156,342,155,342,401,298,401};

    int perlin1[]={269,196,292,198,303,196,320,193,335,196,348,198,370,196,370,206,332,205,330,211,320,207,310,211,307,205,269,206};
    int perlin1poli[]={303,196,320,193,335,196,330,211,320,207,310,211,};
    int perlin1_rellenobajo[]={269,206,307,205,310,211,269,216};
    int perlin1_rellenoba[]={370,206,332,205,330,211,370,216};
    int perlin2[]={269,242,292,248,320,245,348,248,370,242,370,262,348,272,320,265,292,272,269,262};
    int perlin3[]={269,296,292,299,320,298,348,299,370,296,370,319,320,316,269,319};
    int perlin4[]={269,342,320,348,370,342,370,371,320,369,269,371};
    int perlin5[]={269,399,370,399,370,425,269,425};


    /*paredes grises con ventanas*/
    /*izquierda*/
    int unionpard[]={123,130,123,396,225,399,225,48};
    int espaciogris1[]={123,149,225,72,225,84,123,158};
    int espaciogris2[]={123,200,225,139,225,153,123,211};
    int espaciogris3[]={123,253,225,209,225,223,123,265};
    int espaciogris4[]={123,307,225,281,225,295,123,318};
    int espaciogris5[]={123,362,225,354,225,368,123,373};

    int espacioazul1[]={123,179,216,118,216,131,123,189};
    int espacioazul2[]={123,231,216,185,216,199,123,242};
    int espacioazul3[]={123,287,216,257,216,270,123,297};
    int espacioazul4[]={123,342,216,328,216,341,123,353};


    int espacionegro1[]={123,158,216,90,216,118,123,179,};
    int espacionegro2[]={123,211,216,158,216,185,123,231};
    int espacionegro3[]={123,265,216,227,216,257,123,287};
    int espacionegro4[]={123,318,216,297,216,328,123,342};
    int espacionegro5[]={123,373,216,368,216,396,123,394};


    /*derecha*/
    int unionparedes[]={414,48,515,129,515,396,414,399};

    int espagris1[]={515,149,414,72,414,84,515,158};
    int espagris2[]={515,200,414,139,414,153,515,211};
    int espagris3[]={515,253,414,209,414,223,515,265};
    int espagris4[]={515,307,414,281,414,295,515,318};
    int espagris5[]={515,362,414,354,414,368,515,373};

    int espaazul1[]={515,179,423,118,423,131,515,189};
    int espaazul2[]={515,231,423,185,423,199,515,242};
    int espaazul3[]={515,287,423,257,423,270,515,297};
    int espaazul4[]={515,342,423,328,423,341,515,353};


    int espanegro1[]={515,158,423,90,423,118,515,179,};
    int espanegro2[]={515,211,423,158,423,185,515,231};
    int espanegro3[]={515,265,423,227,423,257,515,287};
    int espanegro4[]={515,318,423,297,423,328,515,342};
    int espanegro5[]={515,373,423,368,423,396,515,394};


        /*UNI*/

    int uni[]={300,427,300,456,315,456,315,440,325,440,325,462,328,462,328,435,312,435,312,453,302,453,302,427};
    int uni2[]={338,427,338,456,340,456,340,440,350,440,350,434,340,434,340,427};


    /*Paisaje*/
    int grama1[]= {588,479,463,434,463,434,462,460,462,460,496,479};
    int grama2[]= {150,480,183,461,183,461,182,437,182,437,67,479};
    /*cielo*/
    int cielo[]={1,1,1,156,1,156,57,74,57,74,109,93,109,93,110,125,110,125,125,129,125,129,262,21,262,21,273,25,273,25,273,127,273,127,296,136,296,136,322,113,322,113,347,137,347,137,367,127,367,127,367,30,367,30,378,22,378,22,516,130,516,130,533,124,533,124,533,94,533,94,584,73,584,73,640,156,640,156,640,0,640,0,1,1};
    int suelo[]={1,479,1,408,1,408,131,409,131,409,224,427,224,427,415,425,415,425,515,406,515,406,639,407,639,407,639,479,639,479,1,479};

   int centro_x = 79;
    int centro_y = 23;
    int radio = 10;
    /*NUBE 2*/
       int centro_x1 = 310;
    int centro_y1= 62;


    /*NUBE3*/
      int centro_x3 = 514;
    int centro_y3 = 46;
    /*NUBE4*/
      int centro_x4 = 154;
    int centro_y4 = 66;
    int radio4 = 10;
    /*NUBE5*/
     int centro_x5 = 423;
    int centro_y5= 24;
    int radio5 = 10;

    /*Coordenadas del centro del circulo de la rotonda*/

    int xr = 320;  /*Coordenada x del centro*/
    int yr = 478; /*Coordenada y del centro*/
    int radiusr = 50;
    int start_angler = 180; /*Angulo inicial*/
    int end_angler = 0;     /*Angulo final*/
    int j;
    int i;
       
   int ip;
   int jp;
    int radius_small = radiusr * 0.6;  

 int palmera[]={563,453, 574, 448, 574,448, 573,405, 578,403, 586,447,586,447,599,453,599,453, 563,453};
int hojas[]={575,403,557,424,557,424,570,396,570,396,540,401,540,401,570,392,570,392,545,377,545,377,577,389,577,389,609,380,609,380,586,393,586,393,612,409,612,409,586,399,586,399,596,424,596,424,575,403};

int palmera2[]={97,451,104,448,104,448,104,417,104,417,107,416,107,416,113,448,113,448,122,452,122,452,97,451};
int hojas2[]={106,414,93,430,93,430,101,412,101,412,81,414,81,414,102,408,102,408,85,398,85,398,107,406,107,406,128,400,128,400,113,408,113,408,131,420,131,420,113,414,113,414,120,431,120,431,106,414};

int camino2[]= {411,475,362,423,362,423,396,423, 474,480};
 int camino1[]={159,476,224,426,224,426,268,425,268,425,222,476};

int lampara[]={22,474,22,358,22,358,0,358,0,351,0,351,58,350, 58,350,58, 358, 58, 358, 33,358,33,358,32,475,32,475,22,474};
int lampara2[]={597,470,595,317,595,317,581,317,581,317,574,317,574,317,580,315,580,315,594,315,594,315,600,470,600,470,597,460};
int luz[]={42,360, 57,360, 57,360,57,367,57,367,42, 365,42,365,42,360};
int luz2[]={578,325,578,325,578,315,584,315,584,315,584,325,584,325,578,325};





    initgraph(&driver,&modo," ");


    /* Contorno de pilar superior izquierdo */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    fillpoly(9, pillar1);

    setfillstyle(SOLID_FILL,8);
    fillpoly(9,manchapilar1);

    setfillstyle(SOLID_FILL,7);
    fillpoly(4,unionpard);

    /*espacios negros de ventana izquierda*/

   setfillstyle(SOLID_FILL,0);
    fillpoly(4,espacionegro1);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espacionegro2);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espacionegro3);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espacionegro4);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espacionegro5);


    /*Lineas de ventanas grandes de la pared gis intermedia*/
    /*IZQUIERDA grande*/

    line(131,152,131,174);
   line(137,148,137,170);
   line(143,143,143,166);
   line(150,138,150,161);
   line(157,133,157,157);
   line(164,128,164,152);
   line(172,122,172,147);
   line(180,117,180,142);
   line(189,110,189,136);
   line(198,104,198,130);
   line(208,96,208,123);


   line(131,206,131,227);
   line(137,203,137,224);
   line(143,200,143,221);
   line(150,196,150,218);
   line(157,192,157,214);
   line(164,188,164,211);
   line(172,183,172,207);
   line(180,179,180,203);
   line(189,173,189,198);
   line(198,168,198,194);
   line(208,163,208,189);


   line(131,262,131,284);
   line(137,259,137,282);
   line(143,257,143,281);
   line(150,254,150,278);
   line(157,251,157,276);
   line(164,248,164,274);
   line(172,245,172,271);
   line(180,242,180,269);
   line(189,238,189,266);
   line(198,234,198,263);
   line(208,230,208,260);



   line(131,316,131,341);
   line(137,315,137,340);
   line(143,313,143,339);
   line(150,312,150,338);
   line(157,310,157,337);
   line(164,309,164,336);
   line(172,307,172,335);
   line(180,305,180,333);
   line(189,303,189,332);
   line(198,301,198,331);
   line(208,299,208,329);


   line(131,373,131,394);
   line(137,372,137,394);
   line(143,372,143,394);
   line(150,372,150,394);
   line(157,371,157,394);
   line(164,371,164,394);
   line(172,371,172,394);
   line(180,370,180,394);
   line(189,370,189,394);
   line(198,369,198,396);
   line(208,369,208,396);

   line(123,172,216,109);
   line(123,225,216,177);
   line(123,279,216,246);
   line(123,333,216,316);
   line(123,388,216,388);



   /*Izquierda pequena*/

   line(127,170,127,176);
   line(134,165,134,172);
   line(140,161,140,168);
   line(147,156,147,163);
   line(153,152,153,159);
   line(160,147,160,155);
   line(168,142,168,149);
   line(176,137,176,144);
   line(185,131,185,138);
   line(194,124,194,132);
   line(203,118,203,127);
   line(213,112,213,120);


   line(127,223,127,229);
   line(134,219,134,226);
   line(140,216,140,223);
   line(147,213,147,219);
   line(153,210,153,216);
   line(160,206,160,213);
   line(168,202,168,209);
   line(176,198,176,205);
   line(185,193,185,200);
   line(194,188,194,196);
   line(203,184,203,191);
   line(213,179,213,186);


   line(127,278,127,286);
   line(134,275,134,283);
   line(140,273,140,282);
   line(147,270,147,279);
   line(153,268,153,277);
   line(160,266,160,275);
   line(168,263,168,272);
   line(176,260,176,270);
   line(185,257,185,267);
   line(194,254,194,264);
   line(203,251,203,261);
   line(213,247,213,258);


   line(127,332,127,341);
   line(134,331,134,340);
   line(140,330,140,339);
   line(147,329,147,338);
   line(153,328,153,337);
   line(160,326,160,336);
   line(168,325,168,335);
   line(176,323,176,334);
   line(185,322,185,333);
   line(194,320,194,331);
   line(203,318,203,330);
   line(213,317,213,328);


   line(127,388,127,394);
   line(134,388,134,394);
   line(140,388,140,394);
   line(147,388,147,394);
   line(153,388,153,394);
   line(160,388,160,394);
   line(168,388,168,394);
   line(176,388,176,394);
   line(185,388,185,394);
   line(194,388,194,396);
   line(203,388,203,396);
   line(213,388,213,396);





    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espaciogris1);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espaciogris2);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espaciogris3);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espaciogris4);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espaciogris5);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espacioazul1);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espacioazul2);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espacioazul3);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espacioazul4);

    

    line(431,96,431,396);




    /* Contorno de pilar superior derecho */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    fillpoly(10, pillar2);
    line(583,72,610,115);
    line(583,72,628,138);
    line(610,115,628,138);


	setfillstyle(SOLID_FILL,8);
    fillpoly(9,manchapilar2);

    setfillstyle(SOLID_FILL,7);
    fillpoly(4,unionparedes);


    /*espacios negros de ventana derecha*/
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espanegro1);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espanegro2);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espanegro3);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espanegro4);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,espanegro5);



    /*Lineas de ventanas grandes de la pared gis intermedia*/
    /*DERECHA grande*/

    line(508,153,508,174);
   line(502,148,502,170);
   line(495,143,495,166);
   line(489,138,489,161);
   line(482,133,482,157);
   line(475,128,475,152);
   line(467,122,467,147);
   line(458,117,458,142);
   line(450,110,450,136);
   line(441,104,441,130);
   line(431,96,431,123);


   line(508,206,508,227);
   line(502,203,502,224);
   line(495,200,495,221);
   line(489,196,489,218);
   line(482,192,482,214);
   line(475,188,475,211);
   line(467,183,467,207);
   line(458,179,458,203);
   line(450,173,450,198);
   line(441,168,441,194);
   line(431,163,431,189);


   line(508,262,508,284);
   line(502,259,502,282);
   line(495,257,495,281);
   line(489,254,489,278);
   line(482,251,482,276);
   line(475,248,475,274);
   line(467,245,467,271);
   line(458,242,458,269);
   line(450,238,450,266);
   line(441,234,441,263);
   line(431,230,431,260);



   line(508,316,508,341);
   line(502,315,502,340);
   line(495,313,495,339);
   line(489,312,489,338);
   line(482,310,482,337);
   line(475,309,475,336);
   line(467,307,467,335);
   line(458,305,458,333);
   line(450,303,450,332);
   line(441,301,441,331);
   line(431,299,431,329);


   line(508,373,508,394);
   line(502,372,502,394);
   line(495,372,495,394);
   line(489,372,489,394);
   line(482,371,482,394);
   line(475,371,475,394);
   line(467,371,467,394);
   line(458,370,458,394);
   line(450,370,450,394);
   line(441,369,441,396);
   line(431,369,431,396);

   line(515,172,423,109);
   line(515,225,423,177);
   line(515,279,423,246);
   line(515,333,423,316);
   line(515,388,423,388);



   /*Derecha pequena*/

   line(512,170,512,176);
   line(505,165,505,172);
   line(499,161,499,168);
   line(492,156,492,163);
   line(486,152,486,159);
   line(478,147,478,155);
   line(471,142,471,149);
   line(462,137,462,144);
   line(454,131,454,138);
   line(446,124,446,132);
   line(436,118,436,127);
   line(427,112,427,120);


   line(512,223,512,229);
   line(505,219,505,226);
   line(499,216,499,223);
   line(492,213,492,219);
   line(486,210,486,216);
   line(478,206,478,213);
   line(471,202,471,209);
   line(462,198,462,205);
   line(454,193,454,200);
   line(446,188,446,196);
   line(436,184,436,191);
   line(427,179,427,186);


   line(512,278,512,286);
   line(505,275,505,283);
   line(499,273,499,282);
   line(492,270,492,279);
   line(486,268,486,277);
   line(478,266,478,275);
   line(471,263,471,272);
   line(462,260,462,270);
   line(454,257,454,267);
   line(446,254,446,264);
   line(436,251,436,261);
   line(427,247,427,258);


   line(512,332,512,341);
   line(505,331,505,340);
   line(499,330,499,339);
   line(492,329,492,338);
   line(486,328,486,337);
   line(478,326,478,336);
   line(471,325,471,335);
   line(462,323,462,334);
   line(454,322,454,333);
   line(446,320,446,331);
   line(436,318,436,330);
   line(427,317,427,328);


   line(512,388,512,394);
   line(505,388,505,394);
   line(499,388,499,394);
   line(492,388,492,394);
   line(486,388,486,394);
   line(478,388,478,394);
   line(471,388,471,394);
   line(462,388,462,394);
   line(454,388,454,394);
   line(446,388,446,396);
   line(436,388,436,396);
   line(427,388,427,396);




    

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espagris1);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espagris2);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espagris3);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espagris4);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,espagris5);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espaazul1);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espaazul2);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espaazul3);

    setfillstyle(SOLID_FILL,1);
    fillpoly(4,espaazul4);


    



    /*en medio*/

    setfillstyle(SOLID_FILL,7);
    fillpoly(4,rectangulomedio);

    

    setfillstyle(SOLID_FILL,7);
    fillpoly(10,cupula_edificio_gris);

    setfillstyle(SOLID_FILL,15);
    fillpoly(4,triangulosuperior);

    

    /*perlin*/
    
    /*lineas de perlines azules*/
    /*Izquierda*/
    setcolor(LIGHTBLUE);
    line(281,160,281,399);
    line(292,163,292,399);
    
    /*Diagonales*/

    line(269,156,281,197);
    line(281,197,292,163);

    line(370,156,357,197);
    line(357,197,348,163);

    line(269,206,281,245);
    line(281,245,292,206);

    line(370,206,357,245);
    line(357,245,348,206);


    line(269,262,281,298);
    line(281,298,292,273);

    line(370,262,357,298);
    line(357,298,348,273);


    line(269,319,281,343);
    line(281,343,292,319);

    line(370,319,357,343);
    line(357,343,348,319);


    line(269,371,281,399);
    line(281,399,292,371);

    line(370,371,357,399);
    line(357,399,348,371);

    /*Vertical izquierda*/

    line(357,160,357,399);
    line(348,163,348,399);

    /*barandales*/
    setcolor(YELLOW);
    line(269,184,292,186);
    line(292,186,320,183);
    line(320,183,348,186);
    line(348,186,370,184);

    line(289,186,289,198);
    line(303,185,303,196);
    line(320,183,320,193);
    line(335,185,335,196);
    line(345,186,345,198);

    line(269,229,292,231);
    line(292,231,348,231);
    line(348,231,370,229);

    line(289,231,289,247);
    line(303,231,303,247);
    line(320,231,320,245);
    line(335,231,335,247);
    line(345,231,345,248);


    line(269,286,292,290);
    line(292,290,348,290);
    line(348,290,370,286);

    line(289,290,289,299);
    line(303,290,303,301);
    line(320,290,320,303);
    line(335,290,335,301);
    line(345,290,345,299);


    line(269,334,292,338);
    line(292,338,348,338);
    line(348,338,370,334);

    line(289,337,289,344);
    line(303,338,303,346);
    line(320,338,320,348);
    line(335,338,335,346);
    line(345,338,345,345);











    setcolor(WHITE);
    setfillstyle(SOLID_FILL,7);
    fillpoly(14,perlin1);

    setfillstyle(SOLID_FILL,8);
    fillpoly(6,perlin1poli);
    
    setfillstyle(SOLID_FILL,8);
    fillpoly(4,perlin1_rellenobajo);

    setfillstyle(SOLID_FILL,8);
    fillpoly(4,perlin1_rellenoba);

    line(269,216,370,216);

    setfillstyle(SOLID_FILL,8);
    fillpoly(10,perlin2);

    line(292,272,348,272);

    setfillstyle(SOLID_FILL,8);
    fillpoly(8,perlin3);
    line(269,319,370,319);

    setfillstyle(SOLID_FILL,8);
    fillpoly(6,perlin4);
    line(269,371,370,371);


    setfillstyle(SOLID_FILL,7);
    fillpoly(4,perlin5);


    /*pared azul frente*/


    setfillstyle(SOLID_FILL,1);
    fillpoly(9,azul_frente);

    setfillstyle(SOLID_FILL,1);
    fillpoly(9,azuldere);

    

    /*lineas medias entre las ventanas de la pared azul del frente */
    /*Izquierda*/
    line(261,18,261,49);
    line(261,120,261,88);
    line(261,163,261,196);
    line(261,240,261,273);
    line(261,319,261,352);

    /*Derecha*/
    line(378,18,378,48);
    line(378,120,378,88);
    line(378,163,378,196);
    line(378,240,378,273);
    line(378,319,378,352);
    

    


    /*Fondo gris de las ventanas*/
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,pimer_espacio_ventanasuperior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,pimer_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventnegra1);

    

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,pimer_espacio_superior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,pimer_espacio_inferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventanegra1);


    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,segundo_espacio_ventanasuperior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,segundo_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventnegra2);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,segundo_espacio_superior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,segundo_espacio_inferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventanegra2);


    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,tercer_espacio_ventanasuperior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,tercer_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventnegra3);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,tercer_espacio_superior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,tercer_espacio_inferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventanegra3);


    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,cuarto_espacio_ventanasuperior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,cuarto_espacio_ventanainferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventnegra4);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    fillpoly(4,cuarto_espacio_superior);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,7);
    fillpoly(5,cuarto_espacio_inferior);

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventanegra4);

    setfillstyle(SOLID_FILL,7);
    fillpoly(5,espacio_puerta);
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventnegra5);

    setfillstyle(SOLID_FILL,7);
    fillpoly(5,espacio_puer);
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,ventanegra5);


    /*Divisones de ventanitas negras de pilares azules*/ 
    /*Izquierda*/       
    line(246,92,255,92);
    line(246,93,254,93);

    line(246,163,262,163);
    line(246,164,262,164);

    line(247,235,262,235);
    line(247,236,262,236);

    line(247,308,262,308);
    line(247,309,262,309);

    line(247,382,262,382);
    line(247,383,262,383);


    /*Derecha*/

    line(393,92,385,92);
    line(393,93,386,93);

    line(393,163,377,163);
    line(393,164,379,164);

    line(392,235,377,235);
    line(392,236,377,236);

    line(392,308,377,308);
    line(392,309,377,309);

    line(392,382,376,382);
    line(392,383,376,383);



    
    /*Lineas grises VERTICALES divisoras*/
    /*Izquierda*/
    
    line(254,163,254,167);
    line(255,163,255,166);

    line(254,163,254,167);
    line(255,163,255,166);

    line(254,235,254,243);
    line(255,235,255,243);

    line(254,308,254,320);
    line(255,308,255,320);

    line(254,382,254,398);
    line(255,382,255,398);


    /*Derecha*/
    
    line(384,163,384,166);
    line(385,163,385,167);

    line(384,235,384,243);
    line(385,235,385,243);

    line(384,308,384,320);
    line(385,308,385,321);

    line(384,382,384,398);
    line(385,382,385,398);


    




    setcolor(WHITE);
     /*Ventanas del lado izquierdo*/
   rectangle(97,148,114,191);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(100, 160, WHITE);
    rectangle(97,197,113,245);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(100, 210, WHITE);
    rectangle(97,252,113,300);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(100, 260, WHITE);
    rectangle(97,308,113,339);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(100, 315, WHITE);


    /*Ventanas del lado derecho*/
    setcolor(WHITE);
    rectangle(525, 155,543,188);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(530, 160, WHITE);
    rectangle(526,201,543,242);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(530, 210, WHITE);
    rectangle(526,254,543,299);
     setfillstyle(SOLID_FILL, BLACK); /*Relleno negro*/
    floodfill(530, 260, WHITE);
    rectangle(526,310,543,339);
     setfillstyle(SOLID_FILL, BLACK);
    floodfill(530, 315, WHITE);
    rectangle(528,374,545,406);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(530, 380, WHITE);
    rectangle(94,374,111,406);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(96, 380, WHITE);



    /*LINEAS DE VENTANAS izquierda*/
    setcolor(WHITE);
    /*Lineas de ventanas de columna gris derceha parte frente*/

    line(105,151,105,192);
    line(97,164,113,168);
    line(97,175,113,179);
    line(105,199,105,245);
    line(97,211,113,216);
    line(97,227,113,230);
    line(97,267,112,271);
    line(97,283,112,286);
    line(105,253,105,299);
    line(105,308,105,340);
    line(97,324,113,326);


   
   /*lineas de ventanas derecha*/


    line(533,155,533,187);
    line(542,162,526,168);
    line(542,175,526,180);
    line(533,201,533,243);
    line(533,255,533,299);
    line(533,310,533,339);
    line(542,211,527,216);
    line(542,228,527,232);
    line(542,323,527,325);
    line(542,268,526,271);
    line(542,283,526,285);






    /*Ventanas del la parte de afuera del edificio gris izquierdo*/
    
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,venton);
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,venton2);
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,venton3);
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,venton4);



    /*DERECHA*/

    setfillstyle(SOLID_FILL,0);
    fillpoly(4,vento);
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,vento2);
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,vento3);
    setfillstyle(SOLID_FILL,0);
    fillpoly(4,vento4);


/*paisaje*/

	setfillstyle(SOLID_FILL,10);
	fillpoly(6,grama1);
    setfillstyle(SOLID_FILL,10);
	fillpoly(6,grama2);

    setfillstyle(SOLID_FILL,9);
	fillpoly(42, cielo);

    
    setfillstyle(SOLID_FILL,8);
	fillpoly(18,suelo);

    /*Dibujar primer circulo*/
    circle(centro_x, centro_y, radio);
	setfillstyle(SOLID_FILL, WHITE); /* Color blanco */
    floodfill(centro_x, centro_y, WHITE);

    /*Dibujar segundo circulo*/
    circle(centro_x + 15, centro_y - 5, radio);
    floodfill(centro_x + 15, centro_y - 5, WHITE);

    /*Dibujar tercer circulo*/
    circle(centro_x + 25, centro_y + 5, radio);
    floodfill(centro_x + 25, centro_y + 5, WHITE);

    /*Dibujar cuarto circulo*/
    circle(centro_x + 35, centro_y, radio);
    floodfill(centro_x + 35, centro_y, WHITE);

    /*NUBE DOS*/


    circle(centro_x1, centro_y1, radio);
    setfillstyle(SOLID_FILL, WHITE); /*Color blanco*/
    floodfill(centro_x1, centro_y1, WHITE);


    circle(centro_x1 + 15, centro_y1 - 5, radio);
    floodfill(centro_x1+ 15, centro_y1 - 5, WHITE);

    circle(centro_x1 + 25, centro_y1 + 5, radio);
    floodfill(centro_x1 + 25, centro_y1 + 5, WHITE);


    circle(centro_x1 + 35, centro_y1, radio);
    floodfill(centro_x1 + 35, centro_y1, WHITE);
    

/*NUBE 3*/

    circle(centro_x3, centro_y3, radio);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(centro_x3, centro_y3, WHITE);

    circle(centro_x3 + 15, centro_y3 - 5, radio);
    floodfill(centro_x3 + 15, centro_y3 - 5, WHITE);

    circle(centro_x3 + 25, centro_y3+ 5, radio);
    floodfill(centro_x3 + 25, centro_y3 + 5, WHITE);

    circle(centro_x3 + 35, centro_y3, radio);
    floodfill(centro_x3 + 35, centro_y3, WHITE);

    /*NUBE4*/

    circle(centro_x4, centro_y4, radio4);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(centro_x4, centro_y4, WHITE);

    circle(centro_x4 + 15, centro_y4 - 5, radio4);
    floodfill(centro_x4+ 15, centro_y4 - 5, WHITE);

    circle(centro_x4 + 25, centro_y4 + 5, radio4);
    floodfill(centro_x4 + 25, centro_y4 + 5, WHITE);

    circle(centro_x4 + 35, centro_y4, radio);
    floodfill(centro_x4 + 35, centro_y4, WHITE);

    /*NUBE5*/

    circle(centro_x5, centro_y5, radio5);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(centro_x5, centro_y5, WHITE);

    circle(centro_x5 + 15, centro_y5 - 5, radio);
    floodfill(centro_x5 + 15, centro_y5 - 5, WHITE);

    circle(centro_x5 + 25, centro_y5 + 5, radio5);
    floodfill(centro_x5 + 25, centro_y5 + 5, WHITE);

    circle(centro_x5 + 35, centro_y5, radio5);
    floodfill(centro_x5 + 35, centro_y5, WHITE);

/* Dibujar el sol */
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(20, 19, 30);
    floodfill(20, 19, YELLOW);

     rectangle(272,463,367,480);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(320, 471, WHITE);

    /*escaleras*/
     setcolor(YELLOW);

	/* Establecer el grosor de la línea */
    setlinestyle(SOLID_LINE, 0, 3);
    line(453,452,453,421);
    line(452,421,508,409);
    line(508,409,637,409);
    line(464,433,508,421);
    line(508,421,638,420);
    line(483,438,508,431);
    line(508,431,638,430);
    line(507,409,507,448);
    line(187,451,187,415);
    line(187,415,131,404);
    line(131,404,2,407);
    line(179,440,179,420);
    line(179,420,130,412);
    line(130,412,2,412);
    line(92,412,89,412);
    line(178,430,130,422);
    line(130,422,2, 422);
    line(130,412,130,452);
    line(90,407,90,447);
    line(65,407,65,441);
    line(41,407,41,443);
    line(544,406,544,450);
    line(575,406,575,446);
    line(610,406,610,441);

    /*rotonda*/
    
    for (i = xr - radiusr; i <= xr + radiusr; i++) {
        for (j = yr - radiusr; j <= yr; j++) {
            if ((i - xr) * (i - xr) + (j - yr) * (j - yr) <= radiusr * radiusr) {
                putpixel(i, j, BROWN);
            }
        }
    }

    /*dibuja medio circulo*/
    setcolor(WHITE);
    arc(xr, yr, start_angler, end_angler, radiusr);


    for (ip = xr - radius_small; ip <= xr + radius_small; ip++) {
        for (jp = yr - radius_small; jp <= yr; jp++) {
            if ((ip - xr) * (ip - xr) + (jp - yr) * (jp - yr) <= radius_small * radius_small) {
                putpixel(ip, jp, (10));
            }
        }
    }

     /*Logo UNI*/

    rectangle(290,427,350,462);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(320, 444, WHITE);

    setfillstyle(SOLID_FILL,15);
    fillpoly(12,uni);

    setfillstyle(SOLID_FILL,15);
    fillpoly(8,uni2);

    setfillstyle(SOLID_FILL,6);
    fillpoly(10,palmera);

    setfillstyle(SOLID_FILL,10);
    fillpoly(24,hojas);

    setfillstyle(SOLID_FILL,6);
    fillpoly(10,palmera2);

    setfillstyle(SOLID_FILL,10);
    fillpoly(24,hojas2);

    setcolor(LIGHTGRAY);

    setfillstyle(SOLID_FILL,8);
    fillpoly(5,camino2);

    setcolor(LIGHTGRAY);

    setfillstyle(SOLID_FILL,8);
    fillpoly(6,camino1);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,0);
    fillpoly(15,lampara);

  
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,0);
    fillpoly(14,lampara2);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, 14);
    fillpoly(8,luz);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, 14);
    fillpoly(8,luz2);



    getch();

    closegraph();

}
