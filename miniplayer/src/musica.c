#include <musica.h>
#include <stddef.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
/* M01: substituir stubs por alocacao, copia segura de strings e free. */
t_musica *musica_criar(int id, const char *titulo, const char *artista, int duracao) {
    
    t_musica* nova = malloc(sizeof(t_musica));

    nova->id = id;
    strcpy(nova->titulo, titulo);
    strcpy(nova->artista, artista);
    nova->duracao = duracao;


    return nova; /* TODO M01 */
}
void musica_destruir(void *carga){
     /* TODO M01 */

    assert(carga!= NULL);

    free((t_musica*)carga);


}
