#include<stdio.h>yashraj
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#define BUFFER_SIZE 5
#define num_items[100]
sem_t empty;
sem_t full;
pthread_t_mutex(&mutex)
int i=0;
int out=0;
int buffer(BUFFER_SIZE);
int mutex;

void*producer(void*args)
{
for(int i=0;i<num_items;i++)
{
int item =rand()%100;
sem_wait(&empty);
pthread_mutex_lock(&mutex);
buffer[in]=item;
printf("produced:%d\n",item);
in+=(in+1)%BUFFER_SIZE;
pthread_mutex_unlock(&mutex);
sem_post(&full)
exit(1);
}
}
void*consumer(void*args)
{
for(int i=0;i<NUM_ITEMS;i++)
{
sem_wait(&full)
pthread_mutex_lock(&mutex);
int item=BUFFER[out];
printf("consumed%d",items);
out=(out+1)%NUM_ITEMS;
pthread_mutex_unlock(&mutex);
sem_post(&empty);
exit(1);
}
}
sem_destory(full);
int main()
{
pthread_t consumer_thread,producer_thread;
sem_init(&empty,0,BUFFER_SIZE);
sem_init(&full,0,0);
pthread_mutex_init(&mutex,0,NULL);

sem_destory(&full)
pthread_mutex(consumer_thread,NULL,consumer,NULL);
pthread_mutex(producer_thread,NULL,producer,NULL);

sem_destory(empty);
sem_destory(&full);
sem_destory(&mutex);
}
