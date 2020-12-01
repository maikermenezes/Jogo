#include "raylib.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DEFAULT_FONT_SIZE 120

void habilidades(){
    Rectangle habilidade = {20, 20, 960, 720};
    
    DrawText("Golpe perfurante (guerreiro): O guerreiro deferir o triplo do dano", 30 , 20, 15, WHITE);
    DrawText("Ataque Comum (guerreiro): Efeito passivo -  A cada três ataques o guerreiro realiza dois ataques extras.", 30 , 45, 15, WHITE);
    DrawText("Provocar (guerreiro): Por duas rodadas os inimigos focam o guerreiro ", 30 , 70, 15, WHITE);
    DrawText("Retomar fôlego (guerreiro): O guerreiro se cura em uma pequena quantia de vida ", 30 , 95, 15, WHITE);
    
    DrawText("Infringir ferimentos (sacerdote): Infringe um bonus de dano no oponente", 30 , 120, 15, WHITE);
    DrawText("Cura menor (sacerdote): Cura uma pequena quantida de vida de todos os aliados ", 30, 145, 15, WHITE);
    DrawText("Cura maior (sacerdote): Cura uma grande quantia de vida de um único alvo ", 30, 170, 15, WHITE);
    DrawText("Escudo da fé (sacerdote): Bloqueia dano por uma rodada ", 30, 320, 15, WHITE);
    DrawText("Reviver (sacerdote): Tráz um aliado de volta a vida com metade de sua vida e mana ", 30, 195, 15, WHITE);
    
    DrawText("Ataque relâmpago (mago): Aprimora o ataque comum por três rodadas ", 30, 220, 15, WHITE);
    DrawText("Bola de fogo (mago): Explosão que causa dano moderado ", 30, 245, 15, WHITE);
    DrawText("Chuva de raios (mago): Cunjuração que causa quantia massiva de dano ", 30, 270, 15, WHITE);
    DrawText("Explosão criogênica (mago): Causa uma peque quantia de dano e atordoa o alvo por duas rodadas ", 30, 295, 15, WHITE);
}

void ataqueComum()
{
    const int screenWidth = 1000;
    const int screenHeight = 740; 
    Texture2D ataqueComum = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/ataques/cortezinho.png");
    float x = screenWidth/2 - 100, y = (screenHeight / 2) -100  ;
    float frameWidth = (float)(ataqueComum.width / 5);
    int maxFrames = (int)(ataqueComum.width / (int)frameWidth);    
    float timer = 0.0f;
    int frame = 0;  
    while (frame <= 5 ){     
    
        BeginDrawing();
          
        timer += GetFrameTime();
              if (timer >= 0.15f){
                  timer = 0.0f;
                  frame+=1;
              }
            if (frame == 5 ){
                  frameWidth = 0;
                  frame = 0;
                  break;
              }
            DrawTextureRec(ataqueComum, Rectangle{frameWidth * frame, 0, frameWidth, ataqueComum.height},   Vector2 {x,y},  RAYWHITE);

        EndDrawing(); 
    }   
    UnloadTexture(ataqueComum);
}

void ataqueComum2()
{
    const int screenWidth = 1000;
    const int screenHeight = 740; 
    Texture2D ataqueComum = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/ataques/AtaqueComum.png");
    float x = screenWidth/2 - 100, y = (screenHeight / 2) -100  ;
    float frameWidth = (float)(ataqueComum.width / 3);
    int maxFrames = (int)(ataqueComum.width / (int)frameWidth);    
    float timer = 0.0f;
    int frame = 0; 
    while (frame <= 5 ){     
    
        BeginDrawing();
          
        timer += GetFrameTime();
              if (timer >= 0.15f){
                  timer = 0.0f;
                  frame+=1;
              }
            if (frame == 5 ){
                  frameWidth = 0;
                  frame = 0;
                  break;
              }
            DrawTextureRec(ataqueComum, Rectangle{frameWidth * frame, 0, frameWidth, ataqueComum.height},   Vector2 {x,y},  RAYWHITE);

        EndDrawing(); 
    }  
    UnloadTexture(ataqueComum);
}
void chuvaDeRaios(){
    
    const int screenWidth = 1000;
    const int screenHeight = 740;
    Texture2D chuvaDeRaios = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/ataques/raio.png");
    float x = screenWidth/2 - 100, y = (screenHeight / 2) -100  ; 
    float frameWidth = (float)(chuvaDeRaios.width / 15);
    int maxFrames = (int)(chuvaDeRaios.width / (int)frameWidth);  
    float timer = 0.0f;
    int frame = 0;  
    while (frame <= 8){      
        BeginDrawing();
        timer += GetFrameTime();
              if (timer >= 0.12f){
                  timer = 0.0f;
                  frame+=1;
              }
             if (frame == 8 ){
                  frameWidth = 0;
                  frame = 0;
                  break;
              }
             DrawTextureRec(chuvaDeRaios, Rectangle{frameWidth * frame, 0, frameWidth, chuvaDeRaios.height },   Vector2 {x,y},  RAYWHITE);
                EndDrawing();   
    }
    UnloadTexture(chuvaDeRaios);
}

void espada(){  
    const int  screenWidth = 1000;
    const int screenHeight = 740;
    Texture2D espadaEncantada = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/ataques/espada.png");
    float x = screenWidth/2 - 50, y = (screenHeight / 2) -100  ;
    float frameWidth = (float)(espadaEncantada.width / 15);
    int maxFrames = (int)(espadaEncantada.width / (int)frameWidth);
    float timer = 0.0f;
    int frame = 0;
    while (frame <= 15) {       
       BeginDrawing();          
        timer += GetFrameTime();
              if (timer >= 0.10f){
                  timer = 0.0f;
                  frame+=1;   
              } 
              if (frame == 15 ){
                  frameWidth = 0;
                  frame = 0;
                  break;
              }
            DrawTextureRec(espadaEncantada, Rectangle{frameWidth * frame, 0, frameWidth, espadaEncantada.height},   Vector2 {x,y},  RAYWHITE);
          EndDrawing();
    }
   UnloadTexture(espadaEncantada);   
}

void golpePerfurante()
{
    const int screenWidth = 1000;
    const int screenHeight = 740;
    Texture2D golpePerfurante = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/ataques/perfurante.png");
    float x = screenWidth/2 - 100, y = (screenHeight / 2) -100  ;
    float frameWidth = (float)(golpePerfurante.width / 4);
    int maxFrames = (int)(golpePerfurante.width / (int)frameWidth);    
    float timer = 0.0f;
    int frame = 0;
    while (frame<=4) {     
       BeginDrawing();
         timer += GetFrameTime();
              if (timer >= 0.20f){
                  timer = 0.0f;
                  frame+=1;
              }
              if (frame == 4 ){
                  frameWidth = 0;
                  frame = 0;
                  break;
              }
             DrawTextureRec(golpePerfurante, Rectangle{frameWidth * frame, 0, frameWidth, golpePerfurante.height},   Vector2 {x,y},  RAYWHITE);
        EndDrawing();   
    }
UnloadTexture(golpePerfurante);
}

void raioDeGelo()
{
    const int screenWidth = 1000;
    const int screenHeight = 600;
    Texture2D raioDeGelo = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/ataques/gelinho.png");
    float x = screenWidth/2 - 100, y = (screenHeight / 2) -50  ;
    float frameWidth = (float)(raioDeGelo.width / 10);
    int maxFrames = (int)(raioDeGelo.width / (int)frameWidth);    
    float timer = 0.0f;
    int frame = 0;
    while (frame <= 10){     
    
       BeginDrawing();
       timer += GetFrameTime();
              if (timer >= 0.2f){
                  timer = 0.0f;
                  frame+=1;
              }
              if (frame == 10 ){
                  frameWidth = 0;
                  frame = 0;
                  break;
              }
             DrawTextureRec(raioDeGelo, Rectangle{frameWidth * frame, 0, frameWidth, raioDeGelo.height},   Vector2 {x,y},  RAYWHITE);
        EndDrawing(); 
    }
UnloadTexture(raioDeGelo);
}

void bolaDeFogo(){
    const int screenWidth = 1000;
    const int screenHeight = 740;
    Texture2D bolaDeFogo = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/ataques/boladefogo.png");
    float x = screenWidth/2 - 100, y = (screenHeight / 2) -100  ;
    float frameWidth = (float)(bolaDeFogo.width / 10);
    int maxFrames = (int)(bolaDeFogo.width / (int)frameWidth);  
    float timer = 0.0f;
    int frame = 0;
    while (frame<=10) {          
       BeginDrawing();
         timer += GetFrameTime();
              if (timer >= 0.15f){
                  timer = 0.0f;
                  frame+=1;
              }
             if (frame == 10 ){
                  frameWidth = 0;
                  frame = 0;
                  break;
             }
             DrawTextureRec(bolaDeFogo, Rectangle{frameWidth * frame, 0, frameWidth, bolaDeFogo.height},   Vector2 {x,y},  RAYWHITE);
             EndDrawing();
    }
UnloadTexture(bolaDeFogo);
}

struct Dimensions
{
    float width;
    float height;
    float virtual_width;
    float virtual_height;
    float scale_x;
    float scale_y;
    float font_size;
};

struct Dimensions screen;

int main(void)
{
     screen.width=1000;
     screen.height=740;
    
    const int screenWidth = 1000;
    const int screenHeight = 740;
    
    InitWindow(screenWidth, screenHeight, "RPG");
   
    screen.virtual_width=3840;
    screen.virtual_height=2160; 
    screen.scale_x = screen.width / screen.virtual_width;
    screen.scale_y = screen.height / screen.virtual_height ;
    screen.font_size = DEFAULT_FONT_SIZE * screen.scale_x;

    SetTargetFPS(60);   

//////////////------Texturas para todos os elementos do mapa------//////////////////////////////////////

    Texture2D knightUp = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/knight/knightup.png");
    Texture2D knightDown = LoadTexture ("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/knight/knightdown.png");
    Texture2D knightRight = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/knight/knightright.png");
    Texture2D knightLeft = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/knight/knightleft.png");
    Texture2D walk = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/tile_walk.png");
    Texture2D grama = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/grama.png");
    Texture2D casa1 = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/frente1.png");
    Texture2D casa2 = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/Casa2.png");
    Texture2D casa3 = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/Casa3.png");
    Texture2D casa4 = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/Casa4.png");
    Texture2D casa5 = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/Casa5.png");
    Texture2D casa6 = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/casa6.png");
    Texture2D arvore = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/arvore.png");
    Texture2D well = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/well.png");
    Texture2D statue = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/statue.png");
    Texture2D bush = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/bush.png");
    Texture2D bush1 = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/bush1.png");
    Texture2D sand = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/sand.png");
    Texture2D graves = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/graves.png");
    Texture2D flores = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/flowers.png");
    Texture2D light = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/light.png");
    Texture2D gate = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/gate.png");
    Texture2D fence = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/fence.png");
    Texture2D wall = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/wall.png");
    
    Texture2D Castelo = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/castelo/castelo_rei.png");
    Texture2D Realeza = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/castelo/realeza.png");
    Texture2D hud = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/castelo/aliados.png");
    Texture2D aventureiros = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/castelo/aventureiros.png");
    Texture2D descricao = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/castelo/descricao.png");
    
    Texture2D mensageiro = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/mensageiroLeft.png");
    Texture2D mensageiroR = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/mensageiroRight.png");
    
    //////////////////////////////////-----Floresta-----//////////////////////////////////////////////////////////
    
    Texture2D gramaf = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/grama.png");
    Texture2D trevas = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/piso.png");
    Texture2D lamiap = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/lamiaS.png");
    Texture2D slimet = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/slimet.png");
    Texture2D ogro = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/ogroS.png");
    Texture2D wolf = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/wolfS.png");
    Texture2D pedra = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/Pedras.png");
    Texture2D tora = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/seca.png");
    Texture2D arvoree = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/arvoret.png");
    
    ///////////////////////////////////////////////-----Castelo-----///////////////////////////////////////////////
    
    Texture2D pisoC = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/pisoC.png");
    Texture2D agua = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/agua.png");
    Texture2D barra = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/barra.png");
    Texture2D barra2 = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/barra2.png");
    Texture2D pilastra = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/teste3.png");
    Texture2D caixao = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/caixao.png");
    Texture2D demonio = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/demonio.png");
    Texture2D hunter = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/hunterS.png");
    Texture2D thief = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/thiefS.png");
    Texture2D warrior = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/warriorS.png");
    Texture2D warlock = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/warlockS.png");
    Texture2D guerreiro = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/undeadS.png");
    
    //////////////////////////////////////////////-----Combate-----///////////////////////////////////////////////
     
    Texture2D floresta = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/floresta.png");
    Texture2D Saida_Cidade = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/foradacidade.png");
    Texture2D Castelo_mago = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/castelomago.png");
    Texture2D Batalha_final = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/batalhafinal.png");  
    Texture2D Slime = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/slimeG.png");
    Texture2D Wolf = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/wolfG.png");
    Texture2D Ogro = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/ogroG.png");
    Texture2D SlimeToxic = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/slimetG.png");
    Texture2D Lamia = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/lamiaG.png");
    Texture2D Drow_Hunter = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/hunterG.png");
    Texture2D Drow_Thief = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/thiefG.png");
    Texture2D Drow_Warrior = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/warriorG.png");
    Texture2D Full_Plate_Undead = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/undeadG.png");
    Texture2D Undead_Warlock = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/warlockG.png");
    Texture2D Red_Mage = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Map/extra/redmageG.png");
    
    ////////////////////////////////////////------Variáveis para animação------///////////////////////////
     
      float frameWidth = (float)(knightUp.width / 3);
      float frameWidthM = (float)(mensageiro.width / 3);
      int maxFrames = (int)(knightUp.width / (int)frameWidth);
      int frame1 = 0;
        
      float timer = 0.0f;
      int frame = 0;
      
      float x = 32.0f, y = 340.0f;
      float x1 = screenWidth/2 - 100, y1 = (screenHeight / 2) -100  ;
      
      float frameWidth1 = (float)(Realeza.width/12);
      float frameHeight = (float)(Realeza.height/8);
      float frameWidth2 = (float) (aventureiros.width/9);
      float frameHeight2 = (float)(aventureiros.height/4);
      
      float frameWidthC = (float)(pisoC.width / 8);
      float frameHeightC = (float)(pisoC.height / 4);
    
    char *story[3];

    story[0]="A cidade de Sindhar sempre foi famosa pelos grandiosos magos\nque conseguiram selar o Rei demônio a vários séculos atrás...";
    story[1]="Eles o selaram em um orbe mágico e o protegem \ncom suas vidas para que não desperte novamente.";
    story[2]="Mas este temido dia pode estar perto de acontecer...";

    Texture2D texture[4];
    texture[0] = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Intro/cidade.png");
    texture[2] = LoadTexture("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Intro/orbe.png");
   

    InitAudioDevice();           
    Sound music = LoadSound("C:/Users/Maike Menezes/Documents/MAIKE/Programming/RPG/Intro/intro.ogg");
    Vector2 position;
    
    srand(time(NULL));
int fugir;
int heroi = 1;
int iniciar = 0;
static int decisao = 0;
int cd = 0;
int dano;
int aj = 0;
int ataque_especial = 0;
int guerreiropoison = 0;
int magopoison = 0;
int sacerdotepoison = 0;
int oponente;
int provocar  = 0;
int stun = 0;
int pular = 0;
int timer1 = 0;

int guerreirostun = 0;
int guerreiromana = 200;
int guerreirovida = 400;
int gforca = 20;
int gdestreza = 15;
int ginteligencia = 10;
int gconstituicao = 20;

int magostun = 0;
int magomana = 600;
int magovida = 260;
int mforca = 7;
int mdestreza = 15;
int minteligencia = 30;
int mconstituicao = 13;
int buff = 0;

int sacerdotestun = 0;
int sacerdotemana = 420;
int sacerdotevida = 320;
int sforca = 15;
int sdestreza = 12;
int sinteligencia = 22;
int sconstituicao = 16;
int cura;
int tim = 0;

int forca;
int destreza;
int reviver = 0;
int combo = 0;
int icombo = 0;
int poder = 0;
int inteligencia;
int constituicao;
int inimigovida;
int quantidade_lobos = 0;
int mana = 0;
int item1 = 1;
int item2 = 1;
int item3 = 1;
int item4 = 1;

    float a = screenWidth/2 - 150, s = (screenHeight / 2) - 100 ;
    
    int entrada = 0;
    int tempo = 0;
    int tempo1 = 0;
    float xM = 500.0f;
    int sentido = 0;
      
    int story_time=0;
    int story_text=0;   
    
    /////////////////////////////------Variável que controla as cenas do jogo------/////////////////////// 
   
    int part = 1;
    int mapa = 1;
    int comecarC = 0;
    int aparecer = 5;
    
    
    ///////////////////////////////////------Colisões------///////////////////////////////////////////////
   bool collision = false;
   bool collision2 = false;
   bool collision3 = false;
   bool collision4 = false;
    
   Rectangle knight = {x, y, knightUp.width/3, knightUp.height};
    //Casas a esquerda
   Rectangle c1 = {0, 110, 470, 170};
   //Casas a direita
   Rectangle c2 = {570, 110, 460, 170};
   //Área do cemitério
   Rectangle c3 = {0, 445 , 490, 205};
   //Parque
   Rectangle c4 = {570, 445 , 500, 210};
   
    voltar:
    SetTargetFPS(60);

    while (!WindowShouldClose())   
    { 
            collision = CheckCollisionRecs(knight,c1);
            collision2 = CheckCollisionRecs(knight,c2);
            collision3 = CheckCollisionRecs(knight,c3);
            collision4 = CheckCollisionRecs(knight,c4);
  
        BeginDrawing();
        ClearBackground(BLACK);

        if(part==1)
        {
            story_time++;

            if(story_time==500 && story_text < 3)   {story_text++;  story_time=0; }
    
            ////////////////////////------Mostrar as imagens na tela------//////////////////////////////////
    
            if(story_text < 3)
            {
                if (IsKeyDown(KEY_SPACE)) part=2;
                
                if(story_text==0)
                {
                    position.x = 400.0f * screen.scale_x - story_time/5*screen.scale_x;
                    position.y = 100.0f * screen.scale_y - story_time/2.5*screen.scale_y;

                    DrawTextureEx(texture[story_text], position, 0.0f, screen.scale_x*3, WHITE);
                }

                if(story_text==1)
                {
                    position.x = 400.0f * screen.scale_x + story_time/8*screen.scale_x;
                    position.y = -100.0f * screen.scale_y + story_time/2.5*screen.scale_y;

                    DrawTextureEx(texture[story_text+1], position, 0.0f, screen.scale_x*3, WHITE);;
                }

                Color faded_color1=Fade(WHITE,(float)story_time/360.0);
                
                /////////////////////------Desenhar o texto paropriado à imagem------/////////////////////////
               
                DrawText(story[story_text], 
                                screen.width/2 - MeasureText(story[story_text], screen.font_size) / 2,
                                screen.height/2 + 830 * screen.scale_y - screen.font_size / 2, 
                                screen.font_size, 
                                faded_color1);
                                                  
            }else{ part=2;}
        }
        if (part == 2){
        
        ClearBackground(RAYWHITE);
    
       ////////////////////////////////////////------Gramado das casas ------/////////////////////////////////////////////////////////////////////////////////
      
        if(entrada == 0 || entrada == 2){
            if (mapa == 1 && aparecer != 7){
        ////////////////////////////////////////------Gramado das casas ------/////////////////////////////////////////////////////////////////////////////////
        for (int j=0; j<=50 ; j++){
        DrawTexturePro(grama, Rectangle{0, 0, (float)grama.width, (float)grama.height},  Rectangle {0, (float)(grama.height/4)*j, 25, 25}, Vector2 {0, 0}, 0, RAYWHITE); 
        for (int i = 0; i <=60; i++){
            DrawTexturePro(grama, Rectangle{0, 0, (float)grama.width, (float)grama.height},  Rectangle {(float)i*grama.width/4,(float)(grama.height/4)*j , 25, 25}, Vector2 {0, 0}, 0, RAYWHITE); 
          }
        } 
       ///////////////////////////////////////////////------Caminho------////////////////////////////////////////////////////////////////////////////////////
         for (int i = 0; i <=60; i++){
            DrawTexturePro(walk, Rectangle{0, 0, (float)walk.width, (float)walk.height},  Rectangle {(float)i*walk.width/4, y1+100, 25, 25}, Vector2 {0, 0}, 0, RAYWHITE); 
            DrawTexturePro(walk, Rectangle{0, 0, (float)walk.width, (float)walk.height},  Rectangle {(float)i*walk.width/4, ((float)y1 + walk.height/4)+100, 25, 25}, Vector2 {0, 0}, 0, RAYWHITE);
          }
         for (int i = 0; i <=70; i++){
            DrawTexturePro(walk, Rectangle{0, 0,(float) walk.width,(float) walk.height},  Rectangle {x1+100, (float)i*walk.height/4, 25, 25}, Vector2 {0, 0}, 0, RAYWHITE); 
            DrawTexturePro(walk, Rectangle{0, 0,(float)walk.width,(float) walk.height},  Rectangle {x1 +((float)walk.width/4)+100, ((float)i*walk.height/4), 25, 25}, Vector2 {0, 0}, 0, RAYWHITE);
            DrawTexturePro(walk, Rectangle{0, 0,(float) walk.width,(float) walk.height},  Rectangle {(float)i*walk.width/4, 740 - (float)walk.height/4, 25, 25}, Vector2 {0, 0}, 0, RAYWHITE); 
            DrawTexturePro(walk, Rectangle{0, 0,(float) walk.width,(float) walk.height},  Rectangle {(float)i*walk.width/4, (float)( 740 - walk.height/2), 25, 25}, Vector2 {0, 0}, 0, RAYWHITE);
          }
          ///////////////////////////////////------Casas------//////////////////////////////////////////////////////////////////////////////
          DrawTexturePro(casa1, Rectangle{0, 0, (float)casa1.width,(float) casa1.height},  Rectangle {240, 155, 125, 200}, Vector2 {0, 0}, 0, RAYWHITE); 
          DrawTexturePro(casa2, Rectangle{0, 0, (float)casa2.width,(float) casa2.height},  Rectangle {120, 150, 125, 200}, Vector2 {0, 0}, 0, RAYWHITE); 
          DrawTexturePro(casa3, Rectangle{0, 0, (float)casa3.width,(float) casa3.height},  Rectangle {0, 150, 125, 200}, Vector2 {0, 0}, 0, RAYWHITE); 
          DrawTexturePro(casa3, Rectangle{0, 0, (float)casa3.width,(float) casa3.height},  Rectangle {360, 155, 125, 200}, Vector2 {0, 0}, 0, RAYWHITE); 
          
          DrawTexturePro(casa2, Rectangle{0, 0, (float)casa2.width, (float)casa2.height},  Rectangle {560, 150, 125, 200}, Vector2 {0, 0}, 0, RAYWHITE); 
          DrawTexturePro(casa2, Rectangle{0, 0, (float)casa2.width, (float)casa2.height},  Rectangle {940, 150, 125, 200}, Vector2 {0, 0}, 0, RAYWHITE); 
          DrawTexturePro(casa3, Rectangle{0, 0, (float)casa3.width, (float)casa3.height},  Rectangle {680, 155, 125, 200}, Vector2 {0, 0}, 0, RAYWHITE); 
          DrawTexturePro(casa1, Rectangle{0, 0, (float)casa1.width, (float)casa1.height},  Rectangle {820, 155, 125, 200}, Vector2 {0, 0}, 0, RAYWHITE); 
        /////////////////////////////////////------ Arbustos ------///////////////////////////////////////////////////////  
          for (int i = 0; i <4 ; i++)DrawTexturePro(bush, Rectangle{0, 0, (float)bush.width, (float)bush.height},  Rectangle {550, (float)420 + (i*68), 70, 70}, Vector2 {0, 0}, 0, RAYWHITE); 
        //////////////////////////////////////////////////------ Caminho de areia ------//////////////////////////////////////////////////////
          for (int i=1; i < 6; i++)DrawTexturePro(sand, Rectangle{0, 0, (float)sand.width, (float)sand.height},  Rectangle {760, 540 - (float)(sand.height/2) * i, 50, 50}, Vector2 {0, 0}, 0, RAYWHITE); 
        ///////////////////////////////////////////////////------Elementos do parque------//////////////////////////////////////////////////////////////
          DrawTexturePro(statue, Rectangle{0, 0, (float)statue.width, (float)statue.height},  Rectangle {805, 520, 60, 60}, Vector2 {0, 0}, 0, RAYWHITE); 
          DrawTexturePro(statue, Rectangle{0, 0, (float)statue.width, (float)statue.height},  Rectangle {705, 520, 60, 60}, Vector2 {0, 0}, 0, RAYWHITE); 
  
         ////////////////////////////////////////------Cemitério------//////////////////////////////////////////////////////////////////////////////////////
        for (int j=0; j< 4 ; j++){
        DrawTexturePro(graves, Rectangle{0, 0, (float)graves.width, (float)graves.height},  Rectangle {60, (float)445 + 50*j, 50, 50}, Vector2 {0, 0}, 0, RAYWHITE); 
        for (int i = 0; i < 6; i++){
            DrawTexturePro(graves, Rectangle{0, 0, (float)graves.width, (float)graves.height},  Rectangle {(float)60 + 50*i,(float)445 + 50*j , 50, 50}, Vector2 {0, 0}, 0, RAYWHITE); 
          }
        } 
        for (int i = 0; i<3 ; i++) DrawTexturePro(flores, Rectangle{0, 0, (float)flores.width, (float)flores.height},  Rectangle {(float)150*i, 630, 150, 60 }, Vector2 {0, 0}, 0, RAYWHITE); 
        DrawTexturePro(light, Rectangle{0, 0, (float)light.width, (float)light.height},  Rectangle {450, 570, 40, 120}, Vector2 {0, 0}, 0, RAYWHITE); 
      /////////////////////////////////////////////////////////------Portão do castelo------/////////////////////////////////////////////////////////////////////////////
        DrawTexturePro(fence, Rectangle{0, 0, (float)fence.width, (float)fence.height},  Rectangle {0, 50, 200, 100 }, Vector2 {0, 0}, 0, RAYWHITE); 
        DrawTexturePro(fence, Rectangle{0, 0,(float) fence.width, (float)fence.height},  Rectangle {200, 50, 200, 100 }, Vector2 {0, 0}, 0, RAYWHITE); 
        DrawTexturePro(wall, Rectangle{0, 0, (float)wall.width, (float)wall.height},  Rectangle {400, -50, 50, 200 }, Vector2 {0, 0}, 0, RAYWHITE); 
        DrawTexturePro(wall, Rectangle{0, 0, (float)wall.width, (float)wall.height},  Rectangle {600, -50, 50, 200 }, Vector2 {0, 0}, 0, RAYWHITE);
        DrawTexturePro(fence, Rectangle{0, 0, (float)fence.width, (float)fence.height},  Rectangle {650, 50, 200, 100 }, Vector2 {0, 0}, 0, RAYWHITE); 
        DrawTexturePro(fence, Rectangle{0, 0, (float)fence.width, (float)fence.height},  Rectangle {850, 50, 200, 100 }, Vector2 {0, 0}, 0, RAYWHITE);   
        DrawTexturePro(gate, Rectangle{0, 0, (float)gate.width, (float)gate.height},  Rectangle {450, 50, 150, 100 }, Vector2 {0, 0}, 0, RAYWHITE);
        DrawTexturePro(arvore, Rectangle{0, 0, (float)arvore.width, (float)arvore.height},  Rectangle {650, 400, 100, 150}, Vector2 {0, 0}, 0, RAYWHITE);  
        DrawTexturePro(arvore, Rectangle{0, 0, (float)arvore.width, (float)arvore.height},  Rectangle {630, 540, 100, 150}, Vector2 {0, 0}, 0, RAYWHITE); 
        DrawTexturePro(arvore, Rectangle{0, 0, (float)arvore.width, (float)arvore.height},  Rectangle {870, 420, 100, 150}, Vector2 {0, 0}, 0, RAYWHITE); 
       
        for (int i = 0; i<5 ; i++) DrawTexturePro(bush1, Rectangle{0, 0, (float)bush1.width, (float)bush1.height},  Rectangle {(float)100*i, 410, 100, 50 }, Vector2 {0, 0}, 0, RAYWHITE); 
        }
        
        if ( x > screenWidth) {
            mapa = 2;
            x = 32.0f;
        }
        if (x >= 495){
         if (xM <= 950 && sentido == 0 ){
            xM += GetFrameTime() * 120.0f;
            timer += GetFrameTime();
              if (timer >= 0.15f){
                  timer = 0.0f;
                  frame1+=1;
              }
              frame1 = frame1 % maxFrames;   
              DrawTexturePro(mensageiro, Rectangle{frameWidthM * frame1, 0, frameWidthM, (float)mensageiro.height},  Rectangle {1500, 500, 55, 55},  Vector2 {xM ,150}, 0,  RAYWHITE);
         } else if (xM > 950){
             DrawTexturePro(mensageiro, Rectangle{frameWidthM * 1, 0, frameWidthM, (float)mensageiro.height},  Rectangle {1500, 500, 55, 55},  Vector2 {xM ,150}, 0,  RAYWHITE);
             
             DrawTexturePro(hud, Rectangle{0, 0, hud.width, hud.height},  Rectangle {0, 440, screenWidth, 300}, Vector2 {0, 0}, 0, RAYWHITE); 
             
             tempo++;
             if(tempo <200){
            DrawText("Mensageiro", 100, 540, 40, RAYWHITE  );
            DrawText("-Hey, aventureiros!", 50, 620, 22, RAYWHITE  ); 
        }else if(tempo < 400){
           DrawText("Guerreiro", 100, 540, 40, RAYWHITE );
            DrawText("-O que está acontecendo garoto? Por que a cidade está vazia?", 50, 620, 22, RAYWHITE );
        }else if(tempo < 1000){
             sentido++;
            DrawText("Mensageiro", 100, 540, 40, RAYWHITE );
            DrawText("-Um Homem misterioso invadiu o castelo e roubou o orbe.", 50, 620, 22, RAYWHITE );
            DrawText("O rei pediu para todos permanecerem em casa e convocou os melhores aventureiros. \n Vocês deveriam ir lá. ", 50, 640, 22, RAYWHITE );
        }         
             
         }
         if  (tempo >= 1000 && sentido != 0 && xM >= 400){
           
            xM -= GetFrameTime() * 120.0f;
           if (xM >=400) timer += GetFrameTime();
            frame = 0;
              if (timer >= 0.15f){
                  timer = 0.0f;
                  frame1+=1;
              }
              frame1 = frame1 % maxFrames;   
              DrawTexturePro(mensageiroR, Rectangle{frameWidthM * frame1, 0, frameWidthM, (float)mensageiroR.height},  Rectangle {1500, 500, 55, 55},  Vector2 {xM ,150}, 0,  RAYWHITE);
              }
         }
       // portao para entrar no castelo
       if(x >= 480 && y <= 120 && x <= 550){
           if(entrada == 0){
          DrawTexture(descricao, 0, 0, RAYWHITE);
          DrawText("Entrada do castelo do rei", 50, 20, 20, RAYWHITE  );
          DrawText("Aperte 'e' para entrar", 50, 60, 20, RAYWHITE  );
          if(IsKeyDown(KEY_E)){
              entrada =1;
              x = 32.0f, y = 340.0f;
           }}else{
               DrawTexture(descricao, 0, 0, RAYWHITE);
               DrawText("Você já se reuniu com o Rei", 50, 20, 20, RAYWHITE  );
               DrawText("Vá recuperar o Orbe", 50, 60, 20, RAYWHITE  );
           }
       }
       }else if(entrada == 1){
         DrawTexture(Castelo, 0, 0, RAYWHITE);
         y = 340.0f;
         DrawTextureRec(Realeza, Rectangle{50, 0, frameWidth1, frameHeight},   Vector2 {440,190},  RAYWHITE);
         DrawTextureRec(Realeza, Rectangle{200, 0, frameWidth1, frameHeight},   Vector2 {520,190},  RAYWHITE);
         DrawTextureRec(Realeza, Rectangle{330, 0, frameWidth1, frameHeight},   Vector2 {550,190},  RAYWHITE);
         DrawTextureRec(Realeza, Rectangle{480, 0, frameWidth1, frameHeight},   Vector2 {390,190},  RAYWHITE);
         for(float i = 0;i <390;i = i +50){
         DrawTextureRec(Realeza, Rectangle{330, 290, frameWidth1, frameHeight},   Vector2 {0 + i,280},  RAYWHITE);}
         for(float i = 590;i <1000;i = i +50){
         DrawTextureRec(Realeza, Rectangle{330, 290, frameWidth1, frameHeight},   Vector2 {0 + i,280},  RAYWHITE);}
         for(float i = 0;i < 1000;i = i + 50){
         DrawTextureRec(Realeza, Rectangle{330, 510, frameWidth1, frameHeight},   Vector2 {0+ i ,520},  RAYWHITE);}

   } 
           if (mapa == 2){
               comecarC = 1;
               if (x >= 290 && comecarC ==1 && aparecer ==5) break;
               if (x >= 400 && comecarC ==1 && aparecer ==4) break;
               if (x >= 490 && comecarC ==1 && aparecer ==3) break;
               if (x >= 600 && comecarC ==1 && aparecer ==2) break;
               if (x >= 810 && comecarC ==1 && aparecer ==1) break;
            for (int j=0; j<=50 ; j++){
        DrawTexturePro(gramaf, Rectangle{0, 0, (float)gramaf.width, (float)gramaf.height},  Rectangle {0, (float)(gramaf.height/4)*j, 25, 25}, Vector2 {0, 0}, 0, RAYWHITE); 
        for (int i = 0; i <=50; i++){
            DrawTexturePro(gramaf, Rectangle{0, 0, (float)gramaf.width, (float)gramaf.height},  Rectangle {(float)i*gramaf.width/4,(float)(gramaf.height/4)*j , 25, 25}, Vector2 {0, 0}, 0, RAYWHITE); 
          }
        }
        for(int i = 0;i<200;i = i +100){
            DrawTexture(arvoree, 0, 0 + i, RAYWHITE);
            for(int j = 0; j<450;j= j +150){
            DrawTexture(arvoree, 0+j, 0+ i, RAYWHITE);
            DrawTexture(arvoree, 600+j, 0+ i, RAYWHITE);
            }}
            
        for(int i = 0;i<200;i = i +100){
            DrawTexture(arvoree, 0, 460 + i, RAYWHITE);
            for(int j = 0; j<450;j= j +150){
                DrawTexture(arvoree, 0 + j, 460 + i, RAYWHITE);
                DrawTexture(arvoree, 600+j, 460+ i, RAYWHITE);
 
                }
            }
        
        for(float i = 0; i<750;i= i + 30){ 
       DrawTextureRec(trevas, Rectangle{0, 128, (float)trevas.width, (float)trevas.height/5},   Vector2 {905,0+i},  RAYWHITE);
       for(float c = 0; c< 500; c= c + 30){
           DrawTextureRec(trevas, Rectangle{0, 128, (float)trevas.width, (float)trevas.height/5},   Vector2 {905 +c,0+i},  RAYWHITE);
            }
        }
        
        if (aparecer >=1) DrawTextureRec(lamiap, Rectangle{0, 50, (float)lamiap.width/3, (float)lamiap.height/4},   Vector2 {880 ,330},  RAYWHITE);
        for(float i = 0;i < 180;i= i+60){
        DrawTextureRec(pedra, Rectangle{0, 0, (float)pedra.width, (float)pedra.height/5},   Vector2 {430+i,20},  RAYWHITE);}
    
    for(float i = 0;i < 180;i= i+60){
    DrawTextureRec(pedra, Rectangle{0, 0, (float)pedra.width, (float)pedra.height/5},   Vector2 {430+i,660},  RAYWHITE);}
    for(int i = 0;i < 240;i= i+60){
    DrawTexture(tora, 910,0+i, RAYWHITE);}
    
    for(int i = 0;i < 240;i= i+60){
    DrawTexture(tora, 910,400+i, RAYWHITE);}
    
    if (aparecer >=5) DrawTextureRec(slimet, Rectangle{70, 0, (float)slimet.width/3, (float)slimet.height/4},   Vector2 {300,350},  RAYWHITE); 
    if (aparecer >= 2) DrawTextureRec(slimet, Rectangle{70, 0, (float)slimet.width/3, (float)slimet.height/4},   Vector2 {620,270},  SKYBLUE);
    if (aparecer >=4) DrawTextureRec(ogro, Rectangle{75, 0, (float)ogro.width/3, (float)ogro.height/4},   Vector2 {420,150},  RAYWHITE);
    if (aparecer >=3) DrawTextureRec(wolf, Rectangle{75, 290, (float)wolf.width/3, (float)wolf.height/4},   Vector2 {500,500},  RAYWHITE);
    
    if(y<30){
        do{
            y++;
        }while(y<30);
    }
    if(x<0){
        do{
            x++;
        }while(x<0);
    }
    if(y<= 200 && x<400){
        do{
            y++;
        }while(y<= 200);
    }
    if(y<190 && x<410){
        do{
            x++;
        }while(x<410);
    }
    if(y<= 200 && x>610){
        do{
            y++;
        }while(y<=200);
    }
    
    if(y< 190 && x>580){
        do{
            x--;
        }while(x> 580);
    }
    
    if(y>400 &&x<400){
        do{
            y--;
       }while(y>400);
    }
    if(y>400 && x< 410){
        do{
            x++;
        }while(x<410);
    }
    if(y>400 && x>610){
     do{
         y--;
     }while(y>400);   
    }
    
    if(y>400 && x>580){
        do{
            x--;
        }while(x>580);
    }
    if(y>590){
        do{
            y--;
        }while(y>590);
    }
    if (x >= 950) {
        mapa = 3;
        x = 32.0f;      
    }
          }
             
        if (mapa == 3) {
            
               comecarC = 2;
               if (x >= 200 && comecarC ==2 && aparecer ==0) break;
               if (x >= 300 && comecarC ==2 && aparecer ==1) break;
               if (x >= 400 && comecarC ==2 && aparecer ==2) break;
               if (x >= 600 && comecarC ==2 && aparecer ==3) break;
               if (x >= 700 && comecarC ==2 && aparecer ==4) break;
               if (x >= 950 && comecarC ==2 && aparecer ==5) break;
                  
            for(float i = 0; i<750;i= i + 80){ 
       DrawTextureRec(pisoC, Rectangle{193, 192, frameWidthC, frameHeightC},   Vector2 {0,0+i},  RAYWHITE);
       for(float c = 0; c< 980; c= c + 40){
           DrawTextureRec(pisoC, Rectangle{193, 192, frameWidthC, frameHeightC},   Vector2 {0 +c,0+i},  RAYWHITE);
       }
       }
       DrawTexture(agua, 700, 150, RAYWHITE);DrawTexture(agua, 700, 50, RAYWHITE);DrawTexture(agua, 700, 0, RAYWHITE);
       DrawTexture(agua, 800, 150, RAYWHITE);DrawTexture(agua, 800, 50, RAYWHITE);DrawTexture(agua, 800, 0, RAYWHITE);
       DrawTexture(agua, 900, 150, RAYWHITE);DrawTexture(agua, 900, 50, RAYWHITE);DrawTexture(agua, 900, 0, RAYWHITE);
       DrawTexture(barra, 660, 0, RAYWHITE);DrawTexture(barra, 660, 100, RAYWHITE);    
       DrawTexture(pilastra, 685, 150, RAYWHITE);
       DrawTexture(pilastra, 690, 400, RAYWHITE);  
       DrawTextureRec(barra2, Rectangle{33, 0, (float)barra2.width/2, (float)barra2.height},   Vector2 {695,220},  RAYWHITE);
       DrawTextureRec(barra2, Rectangle{33, 0, (float)barra2.width/2, (float)barra2.height},   Vector2 {800,220},  RAYWHITE);
       DrawTextureRec(barra2, Rectangle{33, 0, (float)barra2.width/2, (float)barra2.height},   Vector2 {900,220},  RAYWHITE);  
       DrawTexture(agua, 700, 500, RAYWHITE);DrawTexture(agua, 700, 600, RAYWHITE);DrawTexture(agua, 700, 650, RAYWHITE);
       DrawTexture(agua, 800, 500, RAYWHITE);DrawTexture(agua, 800, 600, RAYWHITE);DrawTexture(agua, 800, 650, RAYWHITE);
       DrawTexture(agua, 900, 500, RAYWHITE);DrawTexture(agua, 900, 600, RAYWHITE);DrawTexture(agua, 900, 650, RAYWHITE); 
       DrawTextureRec(barra2, Rectangle{33, 0, (float)barra2.width/2, (float)barra2.height},   Vector2 {700,460},  RAYWHITE);
       DrawTextureRec(barra2, Rectangle{33, 0, (float)barra2.width/2, (float)barra2.height},   Vector2 {800,460},  RAYWHITE);
       DrawTextureRec(barra2, Rectangle{33, 0, (float)barra2.width/2, (float)barra2.height},   Vector2 {900,460},  RAYWHITE);
       
      if (aparecer <= 2) DrawTextureRec(hunter, Rectangle{50, 0, (float)hunter.width/3, (float)hunter.height/4},   Vector2 {400,300},  RAYWHITE);  
      if (aparecer <= 3)  DrawTextureRec(thief, Rectangle{50, 140, (float)thief.width/3, (float)thief.height/4},   Vector2 {600,400},  RAYWHITE);    
      if (aparecer <= 4)  DrawTextureRec(warrior, Rectangle{0, 47, (float)warrior.width/3, (float)warrior.height/4},   Vector2 {700,300},  RAYWHITE);     
      if (aparecer <= 1)  DrawTextureRec(warlock, Rectangle{60, 50, (float)warlock.width/4, (float)warlock.height/4},   Vector2 {300,400},  RAYWHITE);      
      if (aparecer <= 0) DrawTextureRec(guerreiro, Rectangle{0, 0, (float)guerreiro.width/4, (float)guerreiro.height/4},   Vector2 {200,250},  RAYWHITE);
      
       DrawTexture(barra, 660, 600, RAYWHITE);DrawTexture(barra, 660, 480, RAYWHITE);      
       DrawTexture(caixao, 20, 0, RAYWHITE);
       DrawTexture(caixao, 20, 550, RAYWHITE);
       DrawTexture(demonio, 240, 0, RAYWHITE);
       DrawTexture(demonio, 240, 500, RAYWHITE);
           
       if(y<230){
           do{
               y++;
           }while(y<230);
       }
       if(y>400){
           do{
               y--;
           }while(y>400);
       }
       if(x<0){
           do{
               x++;
           }while(x<0);
       }
       
       if (x >= 950) {
           mapa = 4;
           tempo1 = 0;
            }
       }
       
        if (aparecer==6){            
          ClearBackground(RAYWHITE);      
          DrawTexture(Castelo, 0, 0, RAYWHITE);
         DrawTextureRec(Realeza, Rectangle{50, 0, frameWidth1, frameHeight},   Vector2 {440,190},  RAYWHITE);         
         DrawTextureRec(Realeza, Rectangle{200, 0, frameWidth1, frameHeight},   Vector2 {520,190},  RAYWHITE);
         DrawTextureRec(Realeza, Rectangle{330, 0, frameWidth1, frameHeight},   Vector2 {550,190},  RAYWHITE);
         DrawTextureRec(Realeza, Rectangle{480, 0, frameWidth1, frameHeight},   Vector2 {390,190},  RAYWHITE);
         for(float i = 0;i <390;i = i +50){
         DrawTextureRec(Realeza, Rectangle{330, 290, frameWidth1, frameHeight},   Vector2 {0 + i,280},  RAYWHITE);}
         for(float i = 590;i <1000;i = i +50){
         DrawTextureRec(Realeza, Rectangle{330, 290, frameWidth1, frameHeight},   Vector2 {0 + i,280},  RAYWHITE);}
         for(float i = 0;i < 1000;i = i + 50){
         DrawTextureRec(Realeza, Rectangle{330, 510, frameWidth1, frameHeight},   Vector2 {0+ i ,520},  RAYWHITE);}
               
        DrawTexturePro(hud, Rectangle{0, 0, (float)hud.width, (float)hud.height},  Rectangle {0, 420, 1000, 300}, Vector2 {0, 0}, 0, RAYWHITE);
        DrawTextureRec(knightUp, Rectangle{50, 0, frameWidth, (float)knightUp.height},   Vector2 {480,340},  RAYWHITE);
        DrawTextureRec(aventureiros, Rectangle{195, 220, frameWidth2, frameHeight2},   Vector2 {538,390},  RAYWHITE);
        DrawTextureRec(aventureiros, Rectangle{335, 220, frameWidth2, frameHeight2},   Vector2 {420,390},  RAYWHITE);
        
        tempo1++;
        if(tempo1 <200){
            DrawText("Rei Argus", 100, 520, 40, RAYWHITE  );
            DrawText("-Parabéns aventureiros por terem salvo o reino!", 50, 600, 22, RAYWHITE  ); 
        }else if(tempo1 < 400){
            DrawText("Rei Argus", 100, 520, 40, RAYWHITE );
            DrawText("-Estou feliz por ter confiado à vocês essa missão.", 50, 600, 22, RAYWHITE );
        }else if(tempo1 < 700){
            DrawText("Rainha Luthien", 100, 520, 40, RAYWHITE );
            DrawText("-Aqui está a sua recompensa de 5 milhões de moedas de ouro.", 50, 600, 22, RAYWHITE );
            DrawText("Embora isso não seja o suficiente parar recompensá-los por sua bravura!", 50, 620, 22, RAYWHITE );
        }else if(tempo1 < 900){
            DrawText("Guerreiro(Aidos)", 100, 520, 40, RAYWHITE );
            DrawText("-A honra foi toda nossa por ter lhe servido, meu rei.", 50, 600, 22, RAYWHITE );
        }else if(tempo1 < 1200){
            DrawText("Maga(Clarice)", 100, 520, 40, RAYWHITE );
            DrawText("-Aqui está o orbe mágico.", 50, 600, 22, RAYWHITE );
            DrawText("Mantenham-no seguro!", 50, 620, 22, RAYWHITE );
        }else if(tempo1 < 1500){
            DrawText("Sacerdote(Alex)", 100, 520, 40, RAYWHITE );
            DrawText("-Agora iremos continuar a nossa jornada.", 50, 600, 22, RAYWHITE );
            DrawText("Estaremos sempre à vossa disposição!", 50, 620, 22, RAYWHITE );
        }else if(tempo1 < 1800)aparecer = 7;
 
            if(IsKeyDown(KEY_E)){
              entrada = 2;
              x = 480.0f, y = 121.0f;
          }
 
        }

            if (aparecer == 7){
                ClearBackground(BLACK);
    
            DrawText("Parabéns por ter finalizado O nosso RPG", screenWidth/2 - 200 , 110, 20, WHITE);
            DrawText("Grupo:  ", screenWidth/2 -130 , 140, 20, WHITE);
            DrawText("Júlio César", screenWidth/2 -130, 170, 20, WHITE);
            DrawText("Leandro Queiroz", screenWidth/2-130 , 200, 20, WHITE);
            DrawText("Maike Menezes", screenWidth/2 -130, 230, 20, WHITE);
            DrawText("Pedro Henrique", screenWidth/2 -130, 260, 20, WHITE);
            DrawText("Thiago Brito", screenWidth/2 -130, 290, 20, WHITE);
            DrawText("Obrigado Professor!", screenWidth/2 -180 , 400, 30, WHITE);
            }

         if(x >= 450.0f && y >= 340.0f && entrada == 1){
        DrawTexturePro(hud, Rectangle{0, 0, (float)hud.width, (float)hud.height},  Rectangle {0, 420, 1000, 300}, Vector2 {0, 0}, 0, RAYWHITE);
        DrawTextureRec(knightUp, Rectangle{50, 0, frameWidth, (float)knightUp.height},   Vector2 {480,340},  RAYWHITE);
        DrawTextureRec(aventureiros, Rectangle{195, 220, frameWidth2, frameHeight2},   Vector2 {538,390},  RAYWHITE);
        DrawTextureRec(aventureiros, Rectangle{335, 220, frameWidth2, frameHeight2},   Vector2 {420,390},  RAYWHITE);
        
        tempo1++;
        if(tempo1 <200){
            DrawText("Rei Argus", 100, 520, 40, RAYWHITE  );
            DrawText("-O nosso Orbe foi roubado e precisamos recuperá-lo a qualquer custo.", 50, 600, 22, RAYWHITE  ); 
        }else if(tempo1 < 400){
            DrawText("Rei Argus", 100, 520, 40, RAYWHITE );
            DrawText("-Convocamos vocês por serem os melhores aventureiros do Reino", 50, 600, 22, RAYWHITE );
        }else if(tempo1 < 700){
            DrawText("Rei Argus", 100, 520, 40, RAYWHITE );
            DrawText("-Uma recompensa de 5 milhões de moedas de ouro vai ser dada para", 50, 600, 22, RAYWHITE );
            DrawText("o grupo de aventureiros que conseguir derrotar o Mago vermelho ", 50, 620, 22, RAYWHITE );
            DrawText("e recuperar o Orbe de Azog! ", 50, 640, 22, RAYWHITE );
        }else if(tempo1 < 900){
            DrawText("Maga(Clarice)", 100, 520, 40, RAYWHITE );
            DrawText("-Eu sabia...estamos realmente em apuros.", 50, 600, 22, RAYWHITE );
        }else if(tempo1 < 1200){
            DrawText("Guerreiro(Aidos)", 100, 520, 40, RAYWHITE );
            DrawText("-Meu Rei acabamos de retornar de Heregitare Hills  ", 50, 600, 22, RAYWHITE );
            DrawText("mas já sabemos de tudo o que aconteceu. Estamos prontos para sair da cidade  ", 50, 620, 22, RAYWHITE );
            DrawText("e ir atrás do Orbe. ", 50, 640, 22, RAYWHITE );
        }else if(tempo1 < 1500){
            DrawText("Rainha Luthien", 100, 520, 40, RAYWHITE );
            DrawText("-Aqui, levem esses itens com vocês, creio que estejam sem  ", 50, 600, 22, RAYWHITE );
            DrawText("devido a sua ultima jornada, então é o mínimo que podemos fazer nessa emergência...", 50, 620, 22, RAYWHITE );
        }else if(tempo1 >1500){
            DrawTexture(descricao, 0, 0, RAYWHITE);
            DrawText("Você recebeu: 5x poção de vida, 5x poção de mana ", 20, 20, 20, RAYWHITE);
            DrawText("e 1 pergaminho de ressurreição.", 20, 40, 20, RAYWHITE);
            
            DrawText("Guerreiro(Aidos):", 100, 520, 40, RAYWHITE );
            DrawText("-Obrigado vossa majestade mas não temos tempo a perder, retornaremos em breve!", 50, 600, 22, RAYWHITE );
            DrawText("Aperte 'e' para sair do castelo do rei", 50, 680, 22, RAYWHITE );
            if(IsKeyDown(KEY_E)){
              entrada = 2;
              x = 480.0f, y = 121.0f;
          }   
        }
       }else{
           
        if (IsKeyDown(KEY_D) && IsKeyUp(KEY_W) && IsKeyUp(KEY_S)){
            
             if (!collision2 && !collision4 && xM <= 501) x += GetFrameTime() * 100.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.08f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
              DrawTextureRec(knightRight, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightUp.height},   Vector2 {x,y},  RAYWHITE);
        }else  if (IsKeyUp(KEY_D) && IsKeyUp(KEY_A) && IsKeyUp(KEY_W) && IsKeyUp(KEY_S) && aparecer !=6 && aparecer != 7 ) DrawTextureRec(knightRight, Rectangle{frameWidth * 2, 0, frameWidth,  (float)knightUp.height},   Vector2 {x,y},  RAYWHITE);   
         else  if (IsKeyDown(KEY_D) && IsKeyDown(KEY_W) ) {
             y -= GetFrameTime() * 50.0f;
             x += GetFrameTime() * 50.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.16f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightUp, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightUp.height},   Vector2 {x,y},  RAYWHITE);
        }else  if (IsKeyDown(KEY_D) && IsKeyDown(KEY_S) ) {
             y += GetFrameTime() * 50.0f;
             x += GetFrameTime() * 50.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.16f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightDown, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightUp.height},   Vector2 {x,y},  RAYWHITE);
        }   
     /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
        if (IsKeyDown(KEY_A) && IsKeyUp(KEY_S) && IsKeyUp(KEY_W)) {
            
            if (!collision && !collision3 && xM <= 501) x -= GetFrameTime() * 100.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.08f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightLeft, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightLeft.height},   Vector2 {x,y},  RAYWHITE);
        }  else  if (IsKeyDown(KEY_A) && IsKeyDown(KEY_W) ) {
             y -= GetFrameTime() * 50.0f;
             x -= GetFrameTime() * 50.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.16f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightUp, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightUp.height},   Vector2 {x,y},  RAYWHITE);
        }else  if (IsKeyDown(KEY_A) && IsKeyDown(KEY_S) ) {
             y += GetFrameTime() * 50.0f;
             x -= GetFrameTime() * 50.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.16f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightDown, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightUp.height},   Vector2 {x,y},  RAYWHITE);
        }else  if (IsKeyDown(KEY_S) && IsKeyDown(KEY_A) ) {
             y += GetFrameTime() * 50.0f;
             x -= GetFrameTime() * 50.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.16f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightDown, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightUp.height},   Vector2 {x,y},  RAYWHITE);
        }

        
    /////////////////////////////////////////////////////////////////////////////////////////////////    
        if (IsKeyDown(KEY_W) && IsKeyUp(KEY_D) && IsKeyUp(KEY_A)){
            
           if(y > 120 && !collision && !collision2 && !collision3 && !collision4 && xM <= 501) y -= GetFrameTime() * 100.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.08f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightUp, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightUp.height},   Vector2 {x,y},  RAYWHITE);
        }else  if (IsKeyDown(KEY_D) && IsKeyDown(KEY_W) ) {
             y -= GetFrameTime() * 50.0f;
              x += GetFrameTime() * 50.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.25f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightUp, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightUp.height},   Vector2 {x,y},  RAYWHITE);
        } else  if (IsKeyDown(KEY_A) && IsKeyDown(KEY_W) ) {
             y -= GetFrameTime() * 50.0f;
             x -= GetFrameTime() * 50.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.25f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightUp, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightUp.height},   Vector2 {x,y},  RAYWHITE);
        }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////    
        if (IsKeyDown(KEY_S) && IsKeyUp(KEY_A) && IsKeyUp(KEY_D)){
            
            if (!collision3 && !collision4 && xM <= 501) y += GetFrameTime() * 100.0f;               
            timer += GetFrameTime();
              
              if (timer >= 0.08f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightDown, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightDown.height},   Vector2 {x,y},  RAYWHITE);
        }else  if (IsKeyDown(KEY_S) && IsKeyDown(KEY_A) ) {
             y += GetFrameTime() * 50.0f;
             x -= GetFrameTime() * 50.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.16f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightDown, Rectangle{frameWidth * frame, 0, frameWidth,(float) knightUp.height},   Vector2 {x,y},  RAYWHITE);
        }else  if (IsKeyDown(KEY_S) && IsKeyDown(KEY_D) ) {
             y += GetFrameTime() * 50.0f;
             x += GetFrameTime() * 50.0f;
              timer += GetFrameTime();
              
              if (timer >= 0.16f){
                  timer = 0.0f;
                  frame+=1;
              }
             frame = frame % maxFrames;   
            DrawTextureRec(knightDown, Rectangle{frameWidth * frame, 0, frameWidth, (float)knightUp.height},   Vector2 {x,y},  RAYWHITE);
       }
      }
       knight.y=y;   
        knight.x=x; 
    }
    EndDrawing();
    }
    
  if (x >= 600 && comecarC == 1 && aparecer == 2  ) 
     {
        aparecer = 1;
        inimigovida =60;
        forca = 12;
        inteligencia = 0;
        constituicao = 6;
        decisao = 0;
        oponente = 1;
       
     }
     if (x >= 490 && comecarC == 1 && aparecer == 3 ) 
     {
        aparecer = 2;
        inimigovida =100;
        forca = 15;
        inteligencia = 0;
        constituicao = 10;
        destreza = 20;
        decisao = 0;
        oponente = 2;
        quantidade_lobos = 2;
       
     }
     if (x >= 400 && comecarC == 1 && aparecer == 4) 
     {
        aparecer = 3;
        inimigovida =180;
        forca = 15;
        inteligencia = 4;
        constituicao = 18;
        decisao = 0;
        oponente = 3;
        
     }
     if (x >= 290 && comecarC == 1 && aparecer == 5 ) 
     {
        aparecer = 4; 
        inimigovida = 100;
        forca = 13;
        inteligencia = 5;
        constituicao = 10;
        decisao = 0;
        oponente = 4;
     
     }
     if (x >= 800 && comecarC == 1 && aparecer == 1 ) 
     {
        aparecer = 0;
        inimigovida =120;
        forca = 16;
        inteligencia = 8;
        constituicao = 12;
        decisao = 0;
        oponente = 5;
        
       
     }
  
     if (x >= 400 && comecarC ==2 && aparecer == 2)
     {
        aparecer = 3;
        inimigovida =150;
        forca = 10;
        inteligencia = 10;
        constituicao = 15;
        destreza = 25;
        decisao = 0;
        oponente = 6;
       
     }
     
     if (x >= 600 && comecarC ==2 && aparecer == 3) 
     {
        aparecer = 4;
        inimigovida =150;
        forca = 10;
        inteligencia = 10;
        constituicao = 15;
        destreza = 25;
        decisao = 0;
        oponente = 7;
       
     }
     
     if (x >= 700 && comecarC ==2 && aparecer == 4) 
     {
        inimigovida =200;
        forca = 18;
        inteligencia = 10;
        constituicao = 20;
        destreza = 12;
        decisao = 0;
        oponente = 8;
        aparecer = 5;
      
     }
     
     if (x >= 200 && comecarC ==2 && aparecer == 0) 
     {
        aparecer = 1;
        inimigovida =150;
        forca = 16;
        inteligencia = 8;
        constituicao = 15;
        destreza = 13;
        decisao = 0;
        oponente = 9;
        reviver = 1;
     
     }
     
     if (x >= 300 && comecarC == 2 && aparecer == 1) 
     {
        aparecer = 2;
        inimigovida =150;
        mana = 280;
        forca = 10;
        inteligencia = 28;
        constituicao = 15;
        destreza = 15;
        decisao = 0;
        oponente = 10;
     
     }
     
     if (x >= 950 && comecarC == 2 && aparecer == 5 ) 
     {
        inimigovida = 1000;
        mana = 1200;
        forca = 10;
        inteligencia = 60;
        constituicao = 50;
        destreza = 20;
        decisao = 0;
        oponente = 11;
        aparecer = 6;
       
     }

static int z = 340;
static int ataque_inimigo;
ataque_inimigo = 0;
ataque_especial = 0;

if (decisao == 0){
combate:
z = 650;

   if (ataque_inimigo == 1){
   if (guerreiropoison >= 1 ) {guerreirovida -= 8 + inteligencia; guerreiropoison--;}
   if (magopoison >= 1 ) {magovida -= 8 + inteligencia; magopoison--;}
   if (sacerdotepoison >= 1 ) {sacerdotevida -= 8 + inteligencia; sacerdotepoison--;}
    }
   dano = 0;
   
if (ataque_inimigo == 1){ 
guerreirostun--; 
magostun--; 
sacerdotestun--;
stun--;
}

if (ataque_inimigo == 1 && stun < 1){
while (!WindowShouldClose())    
    {
       if (guerreirovida < 1 && magovida < 1 && sacerdotevida < 1) {decisao = 5; break;}
        BeginDrawing();    
            if (timer < 3){
                DrawRectangle( 0, 0, 1000, 740, Fade(RED, 0.8f));
            timer++;}
            else if (timer < 6) {ClearBackground(RAYWHITE); 
            if (oponente == 1){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Slime, Rectangle{0, 0, (float)Slime.width, (float)Slime.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 2){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Wolf, Rectangle{0, 0, Wolf.width, (float)Wolf.height},  Rectangle {a-50, a-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);  
            }
            if (oponente == 3){
                DrawTextureRec(floresta, Rectangle{0, 0,(float) floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Ogro, Rectangle{0, 0, (float)Ogro.width, (float)Ogro.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 4){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(SlimeToxic, Rectangle{0, 0,(float) SlimeToxic.width, (float)SlimeToxic.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 5){
                DrawTextureRec(floresta, Rectangle{0, 0,(float) floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Lamia, Rectangle{0, 0, (float)Lamia.width, (float)Lamia.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 6){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Hunter, Rectangle{0, 0,(float) Drow_Hunter.width, (float)Drow_Hunter.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 7){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0,(float) Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Thief, Rectangle{0, 0, (float)Drow_Thief.width, (float)Drow_Thief.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 8){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Warrior, Rectangle{0, 0, (float)Drow_Warrior.width, (float)Drow_Warrior.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 9){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Full_Plate_Undead, Rectangle{0, 0, (float)Full_Plate_Undead.width, (float)Full_Plate_Undead.height},  Rectangle {a, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 10){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Undead_Warlock, Rectangle{0, 0, (float)Undead_Warlock.width, (float)Undead_Warlock.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 11){
                DrawTextureRec(Batalha_final, Rectangle{0, 0, (float)Batalha_final.width, (float)Batalha_final.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Red_Mage, Rectangle{0, 0,(float) Red_Mage.width, (float)Red_Mage.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            timer++;}
            else if (timer < 9) {
                DrawRectangle( 0, 0, 1000, 740, Fade(RED, 0.8f));
            timer++;}
            
            if (guerreirovida < 1 && magovida < 1 && sacerdotevida < 1) {decisao = 5; break;}
            
            if (timer > 8) {timer = 0; break;}
            
            
        EndDrawing();
    }
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------

if (oponente == 1 && ataque_inimigo == 1 && stun < 1) //slime
{
    while (ataque_inimigo != 0){
    ataque_inimigo = GetRandomValue(1, 3);
    if (provocar > 0 && guerreirovida > 0) {ataque_inimigo = 1; provocar--;}
    if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,6) + forca; ataque_inimigo = 0; }
    else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,6) + forca ; ataque_inimigo = 0; }
    else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,6) + forca; ataque_inimigo = 0;}
    }
}



if (oponente == 2 && ataque_inimigo == 1 && stun < 1) //lobo
{
    if (ataque_especial == 2)
    {
        dano = GetRandomValue(1, 4) + destreza;
        if (dano >= 22) dano += GetRandomValue(1, 8) + destreza;
        if (quantidade_lobos > 1) dano += 5;
        
        while (ataque_inimigo != 0){
            ataque_inimigo = GetRandomValue (1,3);
            if (provocar > 0 && guerreirovida > 0) {ataque_inimigo = 1; provocar--;}
        if (ataque_inimigo == 1 && guerreirovida > 0){guerreirovida -= dano; ataque_inimigo = 0;}
        else if (ataque_inimigo == 2 && magovida > 0){magovida -= dano; ataque_inimigo = 0;}
        else if (ataque_inimigo == 3 && sacerdotevida > 0){sacerdotevida -= dano; ataque_inimigo = 0;}        
        }
        dano = 0;
        ataque_especial = 0;
    }
    else 
    {
        if (quantidade_lobos > 1) dano += 5;
        dano += GetRandomValue(1,8) + destreza;
        while (ataque_inimigo != 0){
            ataque_inimigo = GetRandomValue (1,3);
           if (provocar > 0 && guerreirovida > 0) {ataque_inimigo = 1; provocar--;}
        if (ataque_inimigo == 1 && guerreirovida > 0){guerreirovida -= dano; ataque_inimigo = 0;}
        else if (ataque_inimigo == 2 && magovida > 0){magovida -= dano; ataque_inimigo = 0;}
        else if (ataque_inimigo == 3 && sacerdotevida > 0){sacerdotevida -= dano; ataque_inimigo = 0;}        
        
         }
         ataque_especial++;
         dano = 0;
}
}

if (oponente == 3 && ataque_inimigo == 1 && stun < 1) //ogro
{
    if (ataque_especial == 1)
        {
           while (ataque_inimigo != 0){
               ataque_inimigo = GetRandomValue(1,3);
               if (provocar > 0 && guerreirovida > 0) {ataque_inimigo = 1; provocar--;}
           if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,12) * 3 + forca; ataque_inimigo = 0; guerreirostun = 1;}
           else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,12) * 3 + forca; ataque_inimigo = 0; magostun = 1;}
           else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,12) * 3 + forca; ataque_inimigo = 0; sacerdotestun = 1;}
           }
           ataque_especial = 0;
        }
        else {
            while (ataque_inimigo != 0){
        ataque_inimigo = GetRandomValue(1, 3);
        if (provocar > 0 && guerreirovida > 0) {ataque_inimigo = 1; provocar--;}
        if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,10) * 2 + forca; ataque_inimigo = 0;}
        else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,10) * 2 + forca; ataque_inimigo = 0;}
        else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,10) * 2 + forca; ataque_inimigo = 0;}
            }
ataque_especial++;            
        }  
}

if (oponente == 4 && ataque_inimigo == 1 && stun < 1) //slime toxico
{
    if (ataque_especial == 1)
        {
           guerreirovida -= GetRandomValue(1,8) * 3 + inteligencia; guerreiropoison = 3;
           magovida -= GetRandomValue(1,8) * 3 + inteligencia; magopoison = 3;
           sacerdotevida -= GetRandomValue(1,8) * 3 + inteligencia; sacerdotepoison = 3;
           ataque_especial = 0;
            ataque_inimigo = 0;
        }
        else {
            while (ataque_inimigo != 0){
        ataque_inimigo = GetRandomValue(1, 3);
        
        if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,6) + forca; ataque_inimigo = 0; guerreiropoison = 3;}
        else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,6) + forca; ataque_inimigo = 0; magopoison = 3;}
        else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,6) + forca; ataque_inimigo = 0; sacerdotepoison = 3;}
            }        
        }
    
    ataque_especial++;
}
 
if (oponente == 5 && ataque_inimigo == 1 && stun < 1) // lamia
{
if (ataque_especial == 1)
        {
           
           guerreirovida -= GetRandomValue(1,8) * 6 + inteligencia; guerreiropoison = 3;
           magovida -= GetRandomValue(1,8) * 6 + inteligencia; magopoison = 3;
           sacerdotevida -= GetRandomValue(1,8) * 6 + inteligencia; sacerdotepoison = 3;
           ataque_especial = 0;
            ataque_inimigo = 0;
        }
        else {
            while (ataque_inimigo != 0){
        ataque_inimigo = GetRandomValue(1, 3);
        
        if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,10) + destreza; ataque_inimigo = 0; guerreiropoison = 3;}
        else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,10) + destreza; ataque_inimigo = 0; magopoison = 3;}
        else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,10) + destreza; ataque_inimigo = 0; sacerdotepoison = 3;}
            }        
        }
    
    ataque_especial++;
}

if (oponente == 6 && ataque_inimigo == 1 && stun < 1) //drow arqueiro
{
    if (ataque_especial == 1)
        {
           while (ataque_inimigo != 0){
               ataque_inimigo = GetRandomValue(1,3);
           if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,8) + destreza + GetRandomValue(1,6) * 2 + inteligencia; ataque_inimigo = 0; guerreirostun = 1;}
           else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,8) + destreza + GetRandomValue(1,6) * 2 + inteligencia; ataque_inimigo = 0; magostun = 1;}
           else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,8) + destreza + GetRandomValue(1,6) * 2 + inteligencia; ataque_inimigo = 0; sacerdotestun = 1;}
           }
           ataque_especial = 0;
        }
        else {
            while (ataque_inimigo != 0){
        ataque_inimigo = GetRandomValue(1, 3);
        
        if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,8) + destreza; ataque_inimigo = 0;}
        else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,8) + destreza; ataque_inimigo = 0;}
        else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,8) + destreza; ataque_inimigo = 0;}
            }
ataque_especial++;            
        }  
}

if (oponente == 7 && ataque_inimigo == 1 && stun < 1){ // drow ladina
while (ataque_inimigo != 0)
{
    ataque_inimigo = GetRandomValue(1,3);
    if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,8) * 2 + destreza + GetRandomValue(1,10) * 2 + inteligencia; ataque_inimigo = 0;}
    else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,8) * 2 + destreza + GetRandomValue(1,10) * 2 + inteligencia; ataque_inimigo = 0;}
    else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,8) * 2 + destreza + GetRandomValue(1,10) * 2 + inteligencia; ataque_inimigo = 0;}
}
}

if (oponente == 8 && ataque_inimigo == 1 && stun < 1){ // drow guerreiro

if (guerreirovida <= 80 && guerreirovida > 0) {guerreirovida = 0;pular = 1; ataque_inimigo =0;}
if (magovida <= 52 && magovida > 0) {magovida = 0; pular = 1;ataque_inimigo = 0;}
if (sacerdotevida <= 64 && sacerdotevida > 0) {sacerdotevida = 0; pular = 1;ataque_inimigo = 0;}


if (pular == 0){
while (ataque_inimigo != 0)
{
     if (guerreirovida < 1 && magovida < 1 && sacerdotevida < 1) {decisao = 5; break;}
   ataque_inimigo = GetRandomValue(1,3);
   if (icombo > 0){
   if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= (GetRandomValue(1,12) + forca) * 3 ; ataque_inimigo = 0;icombo = 0;}
   else if(ataque_inimigo == 2 && magovida > 0){ magovida -= (GetRandomValue(1,12) + forca) * 3; ataque_inimigo = 0;icombo = 0;}
   else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= (GetRandomValue(1,12) + forca) * 3; ataque_inimigo = 0;icombo = 0;}
   }
   else{
   if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,12) + forca; ataque_inimigo = 0;}
   else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,8) * 2 + destreza + GetRandomValue(1,10) * 2 + inteligencia; ataque_inimigo = 0;}
   else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,8) * 2 + destreza + GetRandomValue(1,10) * 2 + inteligencia; ataque_inimigo = 0;}

   }
}
}
}

if (oponente == 9 && ataque_inimigo == 1 && stun < 1){ // esqueleto guerreiro

if (guerreirovida <= 100 && guerreirovida > 0) {guerreirovida = 0;pular = 1; ataque_inimigo =0;}
if (magovida <= 54 && magovida > 0) {magovida = 0; pular = 1;ataque_inimigo = 0;}
if (sacerdotevida <= 80 && sacerdotevida > 0) {sacerdotevida = 0; pular = 1;ataque_inimigo = 0;}


if (pular == 0){
while (ataque_inimigo != 0)
{
   ataque_inimigo = GetRandomValue(1,3);
   if (icombo > 0){
   if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= (GetRandomValue(1,12) + forca) * 3 ; ataque_inimigo = 0;icombo = 0;}
   else if(ataque_inimigo == 2 && magovida > 0){ magovida -= (GetRandomValue(1,12) + forca) * 3; ataque_inimigo = 0;icombo = 0;}
   else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= (GetRandomValue(1,12) + forca) * 3; ataque_inimigo = 0;icombo = 0;}
   }
   else{
   if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,12) + forca; ataque_inimigo = 0;}
   else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,12) + forca; ataque_inimigo = 0;}
   else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,12) + forca; ataque_inimigo = 0;}

   }
}
}
}

if (oponente == 10 && mana < 60 && ataque_inimigo == 1 && stun < 1){ mana = 280; ataque_inimigo = 0;}

if (oponente == 10 && ataque_inimigo == 1 && stun < 1){ //esqueleto bruxo
 do{
 poder = GetRandomValue(1,100);
 if (poder < 30){
     while (ataque_inimigo != 0){
    ataque_inimigo = GetRandomValue(1,3);
   if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,8) + destreza; ataque_inimigo = 0;}
   else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,8) + destreza; ataque_inimigo = 0;}
   else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,8) + destreza; ataque_inimigo = 0;}
     }
 }
 else if (poder < 65 && mana >= 60){
      while (ataque_inimigo != 0){
    ataque_inimigo = GetRandomValue(1,3);
   if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,8) * 10 + inteligencia; ataque_inimigo = 0;}
   else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,8) * 10 + inteligencia; ataque_inimigo = 0;}
   else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,8) * 10 + inteligencia; ataque_inimigo = 0;}
     }
     mana -= 60;
 }
 else if (poder < 101 && mana >= 80){
     while (ataque_inimigo != 0){
               ataque_inimigo = GetRandomValue(1,3);
           if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,8) * 8 + inteligencia; ataque_inimigo = 0; guerreirostun = 2;}
           else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,8) * 8 + inteligencia; ataque_inimigo = 0; magostun = 2;}
           else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,8) * 8 + inteligencia; ataque_inimigo = 0; sacerdotestun = 2;}
           }
           mana -= 80;
 }
}while (ataque_inimigo != 0);
}


if (oponente == 10 && mana < 60 && ataque_inimigo == 1 && stun < 1){ mana = 1200; ataque_inimigo = 0;}

if (oponente == 11 && ataque_inimigo == 1 && stun < 1){
    do{
    poder = GetRandomValue (1,100);
  
    if (poder < 25 && mana >= 70){
    guerreirovida -= GetRandomValue(1,6) * 10 + inteligencia; ataque_inimigo = 0;
    magovida -= GetRandomValue(1,6) * 10 + inteligencia; ataque_inimigo = 0;
    sacerdotevida -= GetRandomValue(1,6) * 10 + inteligencia; ataque_inimigo = 0;
    mana -= 70;
    }
     
    else if (poder < 50 && mana >= 80){
       while (ataque_inimigo != 0){
               ataque_inimigo = GetRandomValue(1,3);
           if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,8) * 8 + inteligencia; ataque_inimigo = 0; guerreirostun = 2;}
           else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,8) * 8 + inteligencia; ataque_inimigo = 0; magostun = 2;}
           else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,8) * 8 + inteligencia; ataque_inimigo = 0; sacerdotestun = 2;} 
    }
    mana -= 80;
}
    else if (poder < 75 && mana >= 300){
        dano = GetRandomValue (1,100) * 2 + inteligencia;
        if (dano < 60) dano = 60;
        while (ataque_inimigo != 0){
               ataque_inimigo = GetRandomValue(1,3);
           if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= dano; ataque_inimigo = 0;}
           else if(ataque_inimigo == 2 && magovida > 0){ magovida -= dano; ataque_inimigo = 0;}
           else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= dano; ataque_inimigo = 0;} 
    }
    mana -= 300;
    }
    else if (poder < 101 && mana >= 60){
       while (ataque_inimigo != 0){
               ataque_inimigo = GetRandomValue(1,3);
           if(ataque_inimigo == 1 && guerreirovida > 0){ guerreirovida -= GetRandomValue(1,8) * 12 + inteligencia; ataque_inimigo = 0;}
           else if(ataque_inimigo == 2 && magovida > 0){ magovida -= GetRandomValue(1,8) * 12 + inteligencia; ataque_inimigo = 0;}
           else if(ataque_inimigo == 3 && sacerdotevida > 0){ sacerdotevida -= GetRandomValue(1,8) * 12 + inteligencia; ataque_inimigo = 0;} 
    }
    mana -= 60;
    }
    }while (ataque_inimigo != 0);


}

if (stun > 0) ataque_inimigo = 0;
 
 //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
       if (guerreirovida < 1 && magovida < 1 && sacerdotevida < 1) {decisao = 5; }
 
 if (iniciar == 1){
  if (heroi == 1 && magovida > 0 ) heroi = 2;
  else if (heroi == 1 && sacerdotevida > 0 ) heroi = 3;
  else if (heroi == 1 && guerreirostun > 0) {ataque_inimigo = 1; iniciar = 0; goto combate;}
  
  else if (heroi == 2 && sacerdotevida > 0) heroi = 3;
  else if (heroi == 2 && guerreirovida > 0) heroi = 1;
  else if (heroi == 2 && magostun > 0) {ataque_inimigo = 1; iniciar = 0; goto combate;}
  
  else if (heroi == 3 && guerreirovida > 0 ) heroi = 1;
  else if (heroi == 3 && magovida > 0 ) heroi = 2;
  else if (heroi == 3 && sacerdotestun > 0) {ataque_inimigo = 1; iniciar = 0; goto combate;}
  
  if (heroi == 1 && guerreirostun > 0) heroi = 2;
  else if (heroi == 2 && magostun > 0) heroi = 3;
  else if (heroi == 3 && sacerdotestun > 0) {ataque_inimigo = 1; goto combate;}
 }
 iniciar = 1;
menu:
tim = 0;
SetTargetFPS(15);
    
 while (!WindowShouldClose())
 {     
 if (guerreirovida < 1 && magovida < 1 && sacerdotevida < 1) {decisao = 5; break;}
     
     
        BeginDrawing();
        
        

            ClearBackground(RAYWHITE);
            
            tim++;
            
            if (oponente == 1){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Slime, Rectangle{0, 0,(float) Slime.width, (float)Slime.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 2){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Wolf, Rectangle{0, 0, (float)Wolf.width, (float)Wolf.height},  Rectangle {a-50, a-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);  
            }
            if (oponente == 3){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Ogro, Rectangle{0, 0,(float) Ogro.width, (float)Ogro.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 4){
                DrawTextureRec(floresta, Rectangle{0, 0,(float) floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(SlimeToxic, Rectangle{0, 0, (float)SlimeToxic.width, (float)SlimeToxic.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 5){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width,(float) floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Lamia, Rectangle{0, 0,(float) Lamia.width,(float) Lamia.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 6){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Hunter, Rectangle{0, 0,(float) Drow_Hunter.width, (float)Drow_Hunter.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 7){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Thief, Rectangle{0, 0, (float)Drow_Thief.width, (float)Drow_Thief.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 8){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Warrior, Rectangle{0, 0,(float) Drow_Warrior.width, (float)Drow_Warrior.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 9){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Full_Plate_Undead, Rectangle{0, 0, (float)Full_Plate_Undead.width, (float)Full_Plate_Undead.height},  Rectangle {a, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 10){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Undead_Warlock, Rectangle{0, 0, (float)Undead_Warlock.width, (float)Undead_Warlock.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 11){
                DrawTextureRec(Batalha_final, Rectangle{0, 0,(float) Batalha_final.width,(float) Batalha_final.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Red_Mage, Rectangle{0, 0, (float)Red_Mage.width, (float)Red_Mage.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            
            
            if (IsKeyDown(KEY_Q)) {
                decisao = 8;
                break;
            }
                
            DrawText(TextFormat("INIMIGO VIDA: %08i", inimigovida), 330, 10, 20, RED);
            DrawRectangle( 10, 610, 250, 113, Fade(SKYBLUE, 0.5f));
            DrawRectangleLines( 10, 610, 250, 113, BLUE);
            
            DrawText(TextFormat("GUERREIRO VIDA: %08i", guerreirovida), 10, 10, 20, PINK);
            DrawText(TextFormat("guerreiro mana: %08i", guerreiromana), 10, 30, 20, PINK);
            DrawText(TextFormat("MAGO VIDA: %08i", magovida), 10, 60, 20, PINK);
            DrawText(TextFormat("mago mana: %08i", magomana), 10, 80, 20, PINK);
            DrawText(TextFormat("SACERDOTE VIDA: %08i", sacerdotevida), 10, 110, 20, PINK);
            DrawText(TextFormat("sacerdote mana: %08i", sacerdotemana), 10, 130, 20, PINK);
            
            
            
            if (heroi == 1) DrawText("GUERREIRO: ", 20, 620, 10, BLACK);
            if (heroi == 2) DrawText("MAGO: ",20, 620, 10,BLACK);
            if (heroi == 3) DrawText("SACERDOTE: ",20, 620, 10,BLACK);
            DrawText("- ATAQUE", 20, 650, 10, BLACK);
            DrawText("- MAGIA", 20, 670, 10, BLACK);
            DrawText("- ITEM", 20, 690, 10, BLACK);
            DrawText("- FUGIR", 20, 710, 10, BLACK);
            DrawRectangle (80, z, 10, 10, RED);
            
            if (IsKeyDown(KEY_UP))
     {
         if (z == 650);
         else{ 
             z -= 20;
             
                  
         }
     }
    else if (IsKeyDown(KEY_DOWN))
     {
         if (z == 710);
        else z += 20;
     }
      
      
      if (tim > 2){ 
      if (IsKeyDown(KEY_ENTER))
      {
          if (z == 650) decisao = 1;
          else if (z == 670) decisao = 2;
          else if (z == 690) decisao = 3;
          else if (z == 710) decisao = 4;
          break;
      }
      }
        

        EndDrawing();
        
    }

}
        int ssd =0;
       if (decisao == 1){
           tim = 0;
           z = 650;
       while (!WindowShouldClose())
       {
            if (guerreirovida < 1 && magovida < 1 && sacerdotevida < 1) {decisao = 5; break;}
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        tim++;
            
            if (oponente == 1){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Slime, Rectangle{0, 0, (float)Slime.width, (float)Slime.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 2){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Wolf, Rectangle{0, 0, (float)Wolf.width, (float)Wolf.height},  Rectangle {a-50, a-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);  
            }
            if (oponente == 3){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Ogro, Rectangle{0, 0, (float)Ogro.width, (float)Ogro.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 4){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(SlimeToxic, Rectangle{0, 0, (float)SlimeToxic.width,(float) SlimeToxic.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 5){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Lamia, Rectangle{0, 0, (float)Lamia.width, (float)Lamia.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 6){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0,(float) Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Hunter, Rectangle{0, 0, (float)Drow_Hunter.width,(float) Drow_Hunter.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 7){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Thief, Rectangle{0, 0, (float)Drow_Thief.width, (float)Drow_Thief.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 8){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0,(float) Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Warrior, Rectangle{0, 0,(float) Drow_Warrior.width,(float) Drow_Warrior.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 9){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0,(float) Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Full_Plate_Undead, Rectangle{0, 0,(float) Full_Plate_Undead.width,(float) Full_Plate_Undead.height},  Rectangle {a, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 10){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Undead_Warlock, Rectangle{0, 0, (float)Undead_Warlock.width,(float) Undead_Warlock.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 11){
                DrawTextureRec(Batalha_final, Rectangle{0, 0, (float)Batalha_final.width,(float) Batalha_final.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Red_Mage, Rectangle{0, 0, (float)Red_Mage.width, (float)Red_Mage.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            
            DrawText(TextFormat("GUERREIRO VIDA: %08i", guerreirovida), 10, 10, 20, PINK);
            DrawText(TextFormat("guerreiro mana: %08i", guerreiromana), 10, 30, 20, PINK);
            DrawText(TextFormat("MAGO VIDA: %08i", magovida), 10, 60, 20, PINK);
            DrawText(TextFormat("mago mana: %08i", magomana), 10, 80, 20, PINK);
            DrawText(TextFormat("SACERDOTE VIDA: %08i", sacerdotevida), 10, 110, 20, PINK);
            DrawText(TextFormat("sacerdote mana: %08i", sacerdotemana), 10, 130, 20, PINK);
            
            DrawText(TextFormat("INIMIGO VIDA: %08i", inimigovida), 330, 10, 20, RED);
            DrawRectangle( 10, 610, 250, 113, Fade(SKYBLUE, 0.5f));
            DrawRectangleLines( 10, 610, 250, 113, BLUE);
            DrawText("ATAQUES: ", 20, 640, 10, BLACK);
            if (heroi == 1){
                DrawText("- GUERREIRO", 20, 620, 10, BLACK);
            DrawText("- ATAQUE COMUM", 20, 650, 10, BLACK);
            DrawText("- GOLPE PERFURANTE ", 20, 670, 10, BLACK);
            }
            if (heroi == 2){
                DrawText("- MAGO", 20, 620, 10, BLACK);
            DrawText("- ATAQUE COMUM", 20, 650, 10, BLACK);}
            if (heroi == 3){
                DrawText("- SACERDOTE", 20, 620, 10, BLACK);
            DrawText("- ATAQUE COMUM", 20, 650, 10, BLACK);
            DrawText("- INFRIGIR FERIMENTOS", 20, 670, 10, BLACK);}
                
            DrawRectangle (160, z, 10, 10, RED);
            if (IsKeyDown(KEY_UP))
     {
         if (z == 650);
         else z -= 20;
     }
    else if (IsKeyDown(KEY_DOWN))
     {
         if (z == 710);
        else z += 20;
     }
        
        
        if (tim > 2){
        if (IsKeyDown(KEY_ENTER) && z == 650){ 
            if (heroi == 1){ // ataque comum guerreiro
             if (combo != 2) {inimigovida -= GetRandomValue(1,12) + gforca;
             combo++; ssd = 1;
             ataqueComum();}
             else {inimigovida -= GetRandomValue(1,12) * 3 + gforca; combo = 0;
             ataqueComum();
            ssd = 1;}}
            
            if (heroi == 2){ //ataque comum mago
                if (buff > 0) {inimigovida -= GetRandomValue(1, 8) + mdestreza + GetRandomValue(1, 10) * 2 + minteligencia;
                buff--;
                espada();}
                else{ inimigovida -= GetRandomValue(1,8) + mdestreza; ataqueComum2();}
                
            ssd = 1;}

            if (heroi == 3){ //ataque comum sacerdote
             inimigovida -= GetRandomValue(1,12) + sforca;
            ssd = 1;
            ataqueComum2();
            }
            
        }
        
            
        
        else if (IsKeyDown(KEY_ENTER) && z == 670){ 
        if (heroi == 1 && guerreiromana >= 20){ //golpe perfurante
        inimigovida -= GetRandomValue(1, 12) * 3 + gforca; 
        guerreiromana -= 20;
        ssd = 1;
        golpePerfurante();
        } 
        if (heroi == 3 && sacerdotemana >= 20){ //infrigir ferimentos
         inimigovida -= GetRandomValue(1, 10) * 4 + sinteligencia;
         ssd = 1;
         ataqueComum();
        }
        
        }
        }
        
        if (IsKeyDown(KEY_V)) goto menu;
        
        if (inimigovida < 1 && quantidade_lobos > 1){ inimigovida = 100; quantidade_lobos -= 1;}
        if (inimigovida < 1 && reviver > 0){ inimigovida = 50; reviver -= 1;}
        if (inimigovida < 1){
        guerreiropoison = 0;
        magopoison = 0;
        sacerdotepoison;
        }
        if (inimigovida < 1){iniciar = 0;heroi = 1; goto voltar;} 
         else if (ssd == 1 ){ 
         if (heroi == 3 && sacerdotevida > 0) ataque_inimigo = 1;
         else if(heroi == 2 && sacerdotevida < 1 ) ataque_inimigo = 1; 
         else if(heroi == 1 && magovida < 1 && sacerdotevida < 1 ) ataque_inimigo = 1;
         ssd = 0;
         goto combate;}
       
       
        
        EndDrawing();
       }
}
       
       
    
       if (decisao == 2){
           tim = 0;
           z = 650;
       while (!WindowShouldClose())
       {
           
        BeginDrawing();
        ClearBackground(RAYWHITE);
        tim++;
        
            if (oponente == 1){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width,(float) Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Slime, Rectangle{0, 0, (float)Slime.width, (float)Slime.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 2){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0,(float) Saida_Cidade.width,(float) Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Wolf, Rectangle{0, 0, (float)Wolf.width, (float)Wolf.height},  Rectangle {a-50, a-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);  
            }
            if (oponente == 3){
                DrawTextureRec(floresta, Rectangle{0, 0,(float) floresta.width, floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Ogro, Rectangle{0, 0,(float) Ogro.width,(float) Ogro.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 4){
                DrawTextureRec(floresta, Rectangle{0, 0,(float) floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(SlimeToxic, Rectangle{0, 0, (float)SlimeToxic.width, (float)SlimeToxic.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 5){
                DrawTextureRec(floresta, Rectangle{0, 0,(float) floresta.width,(float) floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Lamia, Rectangle{0, 0, (float)Lamia.width,(float) Lamia.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 6){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0,(float) Castelo_mago.width,(float) (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Hunter, Rectangle{0, 0, (float)Drow_Hunter.width,(float) Drow_Hunter.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 7){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Thief, Rectangle{0, 0,(float) Drow_Thief.width,(float) Drow_Thief.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 8){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Warrior, Rectangle{0, 0, (float)Drow_Warrior.width, (float)Drow_Warrior.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 9){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0,(float) Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Full_Plate_Undead, Rectangle{0, 0,(float) Full_Plate_Undead.width, (float)Full_Plate_Undead.height},  Rectangle {a, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 10){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Undead_Warlock, Rectangle{0, 0, (float)Undead_Warlock.width, (float)Undead_Warlock.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 11){
                DrawTextureRec(Batalha_final, Rectangle{0, 0, (float)Batalha_final.width, (float)Batalha_final.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Red_Mage, Rectangle{0, 0, (float)Red_Mage.width, (float)Red_Mage.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            
            DrawText(TextFormat("INIMIGO VIDA: %08i", inimigovida), 330, 10, 20, RED);
            DrawText(TextFormat("GUERREIRO VIDA: %08i", guerreirovida), 10, 10, 20, PINK);
            DrawText(TextFormat("guerreiro mana: %08i", guerreiromana), 10, 30, 20, PINK);
            DrawText(TextFormat("MAGO VIDA: %08i", magovida), 10, 60, 20, PINK);
            DrawText(TextFormat("mago mana: %08i", magomana), 10, 80, 20, PINK);
            DrawText(TextFormat("SACERDOTE VIDA: %08i", sacerdotevida), 10, 110, 20, PINK);
            DrawText(TextFormat("sacerdote mana: %08i", sacerdotemana), 10, 130, 20, PINK);
            
            
            DrawRectangle( 10, 610, 250, 113, Fade(SKYBLUE, 0.5f));
            DrawRectangleLines( 10, 610, 250, 113, BLUE);
        
           
            if (heroi == 1){
            DrawText("GUERREIRO: ",20,620,10,BLACK);
            DrawText("PROVOCAR ", 20, 650, 10, BLACK);
            DrawText("- RETOMAR FOLEGO", 20, 670, 10, BLACK);}
            if (heroi == 2){
                DrawText("MAGO: ", 20, 620, 10, BLACK);
                DrawText("- ATAQUE RELAMPAGO", 20, 650, 10, BLACK);
                DrawText("- BOLA DE FOGO", 20, 670, 10, BLACK);
                DrawText("- CHUVA DE RAIOS", 20, 690, 10, BLACK);
                DrawText("- EXPLOSÃO CRIOGENICA", 20, 710, 10, BLACK);}
            if (heroi == 3){
                DrawText("SACERDOTE: ", 20, 620, 10, BLACK);
                DrawText("- CURA MENOR", 20, 650, 10, BLACK);
                DrawText("- CURA MAIOR", 20, 670, 10, BLACK);
                DrawText("- ESCUDO DA FÉ", 20, 690, 10, BLACK);
                DrawText("- REVIVER", 20, 710, 10, BLACK);}
            
            DrawRectangle (140, z, 10, 10, RED);
            if (IsKeyDown(KEY_UP))
     {
         if (z == 650);
         else{ 
             z -= 20; 
         }
     }
    else if (IsKeyDown(KEY_DOWN))
     {
         if (z == 710);
        else z += 20;
     }
        
        if (tim > 2){
        if (IsKeyDown(KEY_ENTER) && z == 650){
            if (heroi == 1 && guerreiromana >= 10){ //provocar
             provocar = 2;
             guerreiromana -= 10;
             ssd = 1;
            }
            
            if (heroi == 2 && magomana >= 30){ //ataque relampago
             buff = 3;
             magomana -= 30;
            goto menu;}
            
            if (heroi == 3 && sacerdotemana >= 40){ //cura menor
                sacerdotemana -= 40;
                cura = GetRandomValue(1, 20) * 2;
                if (cura == 40) cura = 80;
                cura += sinteligencia * 2;
                if (guerreirovida > 0)guerreirovida += cura;
                if (guerreirovida > 400) guerreirovida = 400;
                if (magovida > 0)magovida += cura;
                if (magovida > 260) magovida = 260;
                if (sacerdotevida > 0)sacerdotevida += cura;
                if (sacerdotevida > 320) sacerdotevida = 320;
                ssd = 1;
                ;
            }
            
        }
            
        
        else if (IsKeyDown(KEY_ENTER) && z == 670){ 
        if (heroi == 1 && guerreiromana >= 20){ //retomar folego
         guerreirovida += GetRandomValue(1, 20) * 2 + gconstituicao;
         guerreiromana -= 20;
         ssd = 1;
        }
        
        if (heroi == 2 && magomana >= 70){ //bola de fogo
            inimigovida -= GetRandomValue(1,6) * 10 + minteligencia;
            magomana -= 70;
            ssd = 1;
            bolaDeFogo();}
            
            if (heroi == 3 && sacerdotemana >= 80){ //cura maior
            decisao = 6;
            sacerdotemana -= 80;
            aj = 1;
            ssd =1;
            break;}
        }
        
        else if (IsKeyDown(KEY_ENTER) && z == 690){ 
         if (heroi == 2 && magomana >= 50){ //chuva de raios
         magomana -= 50;
         inimigovida -= GetRandomValue(1,8) * 10 + minteligencia;
         ssd = 1;
         chuvaDeRaios();
         }
         
         if (heroi == 3 && sacerdotemana >= 50){ // escudo da fe falta implementar 
         ataque_inimigo = 0;
         goto combate;
         }
        }
        
        else if (IsKeyDown(KEY_ENTER) && z == 710){
        if (heroi == 2 && magomana >= 80){ // explosão criogenica
        magomana -= 80;
        inimigovida -= GetRandomValue(1,8) * 8 + minteligencia;
        stun = 3;
        ssd = 1;
        raioDeGelo();
         }
         
        if (heroi == 3 && sacerdotemana >= 100){ //reviver
             decisao = 6;
             sacerdotemana -= 100;
             aj = 2;
        break;}
        }
        }
        
        if (IsKeyDown(KEY_V)) goto menu; 
       
        if (inimigovida < 1 && quantidade_lobos > 1){ inimigovida = 100; quantidade_lobos -= 1;}
         if (inimigovida < 1){iniciar = 0;heroi = 1; goto voltar;} 
         else if (ssd == 1 ){ 
         if (heroi == 3 && sacerdotevida > 0) {ataque_inimigo = 1; }
         else if(heroi == 2 && sacerdotevida < 1) {ataque_inimigo = 1;}
         else if(heroi == 1 && magovida < 1 && sacerdotevida < 1 ) {ataque_inimigo = 1;}
         ssd = 0;
         goto combate;}
       
        
       
        EndDrawing();
       }
       }
       
        
       
        
      if (decisao == 3){
          tim = 0;
         z = 650;
       while (!WindowShouldClose())
       {
           
        BeginDrawing();
        ClearBackground(RAYWHITE);
        tim++;
            
            if (oponente == 1){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width,(float) Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Slime, Rectangle{0, 0, (float)Slime.width,(float) Slime.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 2){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Wolf, Rectangle{0, 0, (float)Wolf.width,(float) Wolf.height},  Rectangle {a-50, a-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);  
            }
            if (oponente == 3){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width,(float) floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Ogro, Rectangle{0, 0, (float)Ogro.width, (float)Ogro.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 4){
                DrawTextureRec(floresta, Rectangle{0, 0,(float) floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(SlimeToxic, Rectangle{0, 0,(float) SlimeToxic.width, (float)SlimeToxic.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 5){
                DrawTextureRec(floresta, Rectangle{0, 0,(float) floresta.width,(float) floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Lamia, Rectangle{0, 0,(float) Lamia.width,(float) Lamia.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 6){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Hunter, Rectangle{0, 0,(float) Drow_Hunter.width,(float) Drow_Hunter.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 7){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0,(float) Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Thief, Rectangle{0, 0,(float) Drow_Thief.width,(float)Drow_Thief.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 8){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0,(float) Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Warrior, Rectangle{0, 0, (float)Drow_Warrior.width,(float) Drow_Warrior.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 9){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Full_Plate_Undead, Rectangle{0, 0, (float)Full_Plate_Undead.width,(float) Full_Plate_Undead.height},  Rectangle {a, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 10){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Undead_Warlock, Rectangle{0, 0, (float)Undead_Warlock.width,(float) Undead_Warlock.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 11){
                DrawTextureRec(Batalha_final, Rectangle{0, 0, (float)Batalha_final.width, (float)Batalha_final.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Red_Mage, Rectangle{0, 0,(float) Red_Mage.width,(float) Red_Mage.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            
            DrawText(TextFormat("INIMIGO VIDA: %08i", inimigovida), 330, 10, 20, RED);
            DrawText(TextFormat("GUERREIRO VIDA: %08i", guerreirovida), 10, 10, 20, PINK);
            DrawText(TextFormat("guerreiro mana: %08i", guerreiromana), 10, 30, 20, PINK);
            DrawText(TextFormat("MAGO VIDA: %08i", magovida), 10, 60, 20, PINK);
            DrawText(TextFormat("mago mana: %08i", magomana), 10, 80, 20, PINK);
            DrawText(TextFormat("SACERDOTE VIDA: %08i", sacerdotevida), 10, 110, 20, PINK);
            DrawText(TextFormat("sacerdote mana: %08i", sacerdotemana), 10, 130, 20, PINK); 
            
            DrawRectangle( 10, 610, 250, 113, Fade(SKYBLUE, 0.5f));
            DrawRectangleLines( 10, 610, 250, 113, BLUE);
            if (heroi == 1){
            DrawText("GUERREIRO: ",20,620,10,BLACK);}
            if (heroi == 2){
            DrawText("MAGO: ",20,620,10,BLACK);}
            if (heroi == 3){
            DrawText("SACERDOTE: ",20,620,10,BLACK);}
            
            DrawText("ITENS: ", 20, 640, 10, BLACK);
            DrawText("- POÇAO GRANDE", 20, 650, 10, BLACK);           
            DrawText("- POÇAO DE MANA GRANDE", 20, 670, 10, BLACK);
            DrawText("- pregaminho de renascimento", 20, 690, 10, BLACK);
            DrawRectangle (180, z, 10, 10, RED);
            if (IsKeyDown(KEY_UP))
     {
         if (z == 340);
         else{ 
             z -= 20;
             
             
         }
     }
    else if (IsKeyDown(KEY_DOWN))
     {
         if (z == 400);
        else z += 20;
     }
        
            
        
        if (tim > 2){
        if (IsKeyDown(KEY_ENTER) && z == 650 && item1 > 0){ 
        if (heroi == 1) guerreirovida += 40;
        if (heroi == 2) magovida += 40;
        if (heroi == 3) sacerdotevida += 40;
        item1 -= 1;
        tim = 0;
        }
        
       
        if (IsKeyDown(KEY_ENTER) && z == 670 && item2 > 0){ 
        if (heroi == 1) guerreiromana += 40;
        if (heroi == 2) magomana += 40;
        if (heroi == 3) sacerdotemana += 40;
        item2 -= 1;
        tim = 0;
        }
        
        if (IsKeyDown(KEY_ENTER) && z == 690 && item3 > 0 && sacerdotevida < 1){
            sacerdotevida = 160;
            tim = 0;
        }
        }
        
        
        if (IsKeyDown(KEY_V)) goto menu;
       
        
        EndDrawing();
       }
       }
       
       if (decisao == 4){
          fugir = 1 + rand() % 2;
           while (!WindowShouldClose())
           {
               BeginDrawing();
               ClearBackground(RAYWHITE);
               if (fugir == 1)
               {
                   if (oponente == 1){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Slime, Rectangle{0, 0, (float)Slime.width, (float)Slime.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 2){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Wolf, Rectangle{0, 0, (float)Wolf.width, (float)Wolf.height},  Rectangle {a-50, a-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);  
            }
            if (oponente == 3){
                DrawTextureRec(floresta, Rectangle{0, 0,(float) floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Ogro, Rectangle{0, 0, (float)Ogro.width, (float)Ogro.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 4){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(SlimeToxic, Rectangle{0, 0, (float)SlimeToxic.width, (float)SlimeToxic.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 5){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Lamia, Rectangle{0, 0,(float) Lamia.width, (float)Lamia.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 6){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Hunter, Rectangle{0, 0, (float)Drow_Hunter.width,(float) Drow_Hunter.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 7){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Thief, Rectangle{0, 0, (float)Drow_Thief.width, (float)Drow_Thief.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 8){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Warrior, Rectangle{0, 0, (float)Drow_Warrior.width, (float)Drow_Warrior.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 9){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Full_Plate_Undead, Rectangle{0, 0, (float)Full_Plate_Undead.width, (float)Full_Plate_Undead.height},  Rectangle {a, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 10){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Undead_Warlock, Rectangle{0, 0, (float)Undead_Warlock.width,(float) Undead_Warlock.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 11){
                DrawTextureRec(Batalha_final, Rectangle{0, 0, (float)Batalha_final.width, (float)Batalha_final.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Red_Mage, Rectangle{0, 0, (float)Red_Mage.width, (float)Red_Mage.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }

                   DrawText("VOCE FUGIU", 400, 300, 20, BLACK);
                   DrawText("PRESSIONE W PARA CONTINUAR", 400, 340, 10, BLACK);
                   if (IsKeyDown(KEY_W)){goto voltar; }
               }
               if (fugir == 2)
               {
                   
                   if (oponente == 1){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Slime, Rectangle{0, 0, (float)Slime.width, (float)Slime.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 2){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Wolf, Rectangle{0, 0, (float)Wolf.width,(float) Wolf.height},  Rectangle {a-50, a-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);  
            }
            if (oponente == 3){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Ogro, Rectangle{0, 0, (float)Ogro.width, (float)Ogro.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 4){
                DrawTextureRec(floresta, Rectangle{0, 0,(float) floresta.width,(float) floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(SlimeToxic, Rectangle{0, 0, (float)SlimeToxic.width, (float)SlimeToxic.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 5){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Lamia, Rectangle{0, 0,(float) Lamia.width, (float)Lamia.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 6){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Hunter, Rectangle{0, 0, (float)Drow_Hunter.width, (float)Drow_Hunter.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 7){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Thief, Rectangle{0, 0, (float)Drow_Thief.width,(float) Drow_Thief.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 8){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Warrior, Rectangle{0, 0, (float)Drow_Warrior.width, (float)Drow_Warrior.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 9){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Full_Plate_Undead, Rectangle{0, 0, (float)Full_Plate_Undead.width, (float)Full_Plate_Undead.height},  Rectangle {a, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 10){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Undead_Warlock, Rectangle{0, 0, (float)Undead_Warlock.width,(float) Undead_Warlock.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 11){
                DrawTextureRec(Batalha_final, Rectangle{0, 0,(float) Batalha_final.width,(float) Batalha_final.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Red_Mage, Rectangle{0, 0, (float)Red_Mage.width,(float) Red_Mage.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
                   
                   DrawText("NAO ESCAPA", 400, 300, 20, BLACK);
                   DrawText("PRESSIONE W PARA CONTINUAR", 400, 340, 10, BLACK);
                   ataque_inimigo = 1;
                   if (IsKeyDown(KEY_W)) goto combate;
               }
               
               EndDrawing();
           }
       }
       
       
       if (decisao == 5){
        while (!WindowShouldClose()){
         BeginDrawing();
         ClearBackground(RAYWHITE);
         DrawText("GAME OVER", screenWidth /2 -80, screenHeight/2  , 60,RED);
         
         EndDrawing();
        }
       }
       if (decisao == 8){
        while (!WindowShouldClose()){
         BeginDrawing();
         ClearBackground(BLACK);
        if (IsKeyReleased(KEY_Q)) goto menu; 
        
        habilidades ();
      
         
         EndDrawing();
        }
       }
       
       if (decisao == 6){
           tim = 0;
           z = 650;
           ssd = 0;
        while (!WindowShouldClose()){
         BeginDrawing();
           ClearBackground(RAYWHITE);
           tim++;
           
           if (oponente == 1){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width, (float)Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Slime, Rectangle{0, 0, (float)Slime.width,(float) Slime.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 2){
                DrawTextureRec(Saida_Cidade, Rectangle{0, 0, (float)Saida_Cidade.width,(float) Saida_Cidade.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Wolf, Rectangle{0, 0, (float)Wolf.width,(float) Wolf.height},  Rectangle {a-50, a-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);  
            }
            if (oponente == 3){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width,(float) floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Ogro, Rectangle{0, 0, (float)Ogro.width, (float)Ogro.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 4){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width,(float) floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(SlimeToxic, Rectangle{0, 0, (float)SlimeToxic.width,(float) SlimeToxic.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 5){
                DrawTextureRec(floresta, Rectangle{0, 0, (float)floresta.width, (float)floresta.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Lamia, Rectangle{0, 0,(float) Lamia.width,(float) Lamia.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 6){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Hunter, Rectangle{0, 0, (float)Drow_Hunter.width,(float) Drow_Hunter.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 7){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Thief, Rectangle{0, 0, (float)Drow_Thief.width, (float)Drow_Thief.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 8){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0,(float) Castelo_mago.width,(float) Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Drow_Warrior, Rectangle{0, 0, (float)Drow_Warrior.width,(float) Drow_Warrior.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 9){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Full_Plate_Undead, Rectangle{0, 0,(float) Full_Plate_Undead.width,(float) Full_Plate_Undead.height},  Rectangle {a, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 10){
                DrawTextureRec(Castelo_mago, Rectangle{0, 0, (float)Castelo_mago.width, (float)Castelo_mago.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Undead_Warlock, Rectangle{0, 0,(float) Undead_Warlock.width, (float)Undead_Warlock.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
            if (oponente == 11){
                DrawTextureRec(Batalha_final, Rectangle{0, 0, (float)Batalha_final.width, (float)Batalha_final.height},   Vector2 {0,0},  RAYWHITE);
                DrawTexturePro(Red_Mage, Rectangle{0, 0,(float) Red_Mage.width, (float)Red_Mage.height},  Rectangle {a-50, s-130, 350, 350}, Vector2 {0, 0}, 0, RAYWHITE);
            }
           
            DrawText(TextFormat("inimigo vida: %08i", inimigovida), 300, 10, 20, RED);
            DrawText(TextFormat("GUERREIRO VIDA: %08i", guerreirovida), 10, 10, 20, PINK);
            DrawText(TextFormat("guerreiro mana: %08i", guerreiromana), 10, 30, 20, PINK);
            DrawText(TextFormat("MAGO VIDA: %08i", magovida), 10, 60, 20, PINK);
            DrawText(TextFormat("mago mana: %08i", magomana), 10, 80, 20, PINK);
            DrawText(TextFormat("SACERDOTE VIDA: %08i", sacerdotevida), 10, 110, 20, PINK);
            DrawText(TextFormat("sacerdote mana: %08i", sacerdotemana), 10, 130, 20, PINK);
            
            DrawRectangle( 10, 610, 250, 113, Fade(SKYBLUE, 0.5f));
            DrawRectangleLines( 10, 610, 250, 113, BLUE);
            DrawRectangle (120, z, 10, 10, RED);
            if (aj == 1){
            DrawText("- CURA MAIOR", 20, 620, 10, BLACK);
            DrawText("- GUERREIRO", 20, 650, 10, BLACK);
            DrawText("- MAGO", 20, 670, 10, BLACK);
            DrawText("- SACERDOTE", 20, 690, 10, BLACK);}
            else {
            DrawText("- RESSURREIÇAO", 20, 620, 10, BLACK);    
            DrawText("- GUERREIRO", 20, 650, 10, BLACK);
            DrawText("- MAGO", 20, 670, 10, BLACK);
            }
            if (IsKeyDown(KEY_UP))
     {
         if (z == 650);
         else{ 
             z -= 20; 
         }
     }
     else if (IsKeyDown(KEY_DOWN))
     {
         if (z == 690);
        else z += 20;
     }
     
   
     if (tim > 2){
     if (IsKeyDown(KEY_Z) && z == 340 ){
            if (aj == 1 && guerreirovida > 0){ //cura maior
            cura = GetRandomValue(1,20) * 4;
            if (cura == 80) cura = 160;
            cura += sinteligencia * 2;
            guerreirovida += cura;
            if (guerreirovida > 400) guerreirovida = 400;
            guerreiropoison = 0;
            guerreirostun = 0;
            ssd = 1;
            }
            if (aj == 2 && guerreirovida < 1){guerreirovida = 200; guerreiromana = 100; ssd = 1;} //reviver
            
        
        }
        if (IsKeyDown(KEY_Z) && z == 360 ){
            if (aj == 1 && magovida > 0){ //cura maior
            cura = GetRandomValue(1,20) * 4;
            if (cura == 80) cura = 160;
            cura += sinteligencia * 2;
            magovida += cura;
            if (magovida > 260) magovida = 260;
            magopoison = 0;
            magostun = 0;
            ssd = 1;
            
            }
        if (aj == 2 && magovida < 1){magovida = 130; magomana = 300; ssd = 1;} //reviver
        
        
        }
        if (IsKeyDown(KEY_Z) && z == 380){
            if (aj == 1 && sacerdotevida > 0){ //cura maior
            cura = GetRandomValue(1,20) * 4;
            if (cura == 80) cura = 160;
            cura += sinteligencia * 2;
            sacerdotevida += cura;
            if (sacerdotevida > 320) sacerdotevida = 320;
            sacerdotepoison = 0;
            sacerdotestun = 0;
            ssd = 1;}
        }
            
        }
         
         if (aj == 1 && IsKeyDown(KEY_V)){ sacerdotemana += 80; goto menu;}
         if (aj == 2 && IsKeyDown(KEY_V)){ sacerdotemana += 100; goto menu;}
         
         if (inimigovida < 1 && quantidade_lobos > 1){ inimigovida = 100; quantidade_lobos -= 1;}
         if (inimigovida < 1){iniciar = 0; goto voltar;} 
         else if (ssd == 1 ){ 
         if (heroi == 3 && sacerdotevida > 0) ataque_inimigo = 1;
        else if(heroi == 2 && sacerdotevida < 1) ataque_inimigo = 1;
         else if(heroi == 1 && magovida < 1 && sacerdotevida < 1 ) ataque_inimigo = 1;
         ssd = 0;
         goto combate;}
         
         EndDrawing();
        }
       }
   
    UnloadSound(music);   
    CloseAudioDevice();       
    CloseWindow();      

    return 0;
}

