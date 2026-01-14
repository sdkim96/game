typedef struct Game {
    char name[50];
} Game;

Game* initialize_game();
void run(Game* game);
void cleanup_game(Game* game);
