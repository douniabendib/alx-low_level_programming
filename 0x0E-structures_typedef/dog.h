#ifdef dog_h
#define dog_h
/**
 * struct dog - dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * my_dog - typedef for struct dog
 */
typedef struct dog my_dog;
#endif
