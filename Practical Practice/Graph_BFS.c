#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int vertex;
    struct Node *next;
};

struct Graph
{
    int numVertices;
    struct Node **adjLists;
};

int visited[10] = {0};

int queue[10];
int front = 0;
int rear = 0;

struct Node *createNode(int v)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->vertex = v;
    newNode->next = NULL;

    return newNode;
}

struct Graph *createGraph(int vertices)
{
    struct Graph *graph;

    graph = (struct Graph *)malloc(sizeof(struct Graph));

    graph->numVertices = vertices;

    graph->adjLists = malloc(vertices * sizeof(struct Node *));

    for (int i = 0; i < vertices; i++)
    {
        graph->adjLists[i] = NULL;
    }

    return graph;
}

void addEdge(struct Graph *graph, int src, int dest)
{
    struct Node *newNode = createNode(dest);

    newNode->next = graph->adjLists[src];

    graph->adjLists[src] = newNode;

    newNode = createNode(src);

    newNode->next = graph->adjLists[dest];

    graph->adjLists[dest] = newNode;
}

void BFS(struct Graph *graph, int startVertex)
{
    visited[startVertex] = 1;

    queue[rear++] = startVertex;

    while (front < rear)
    {
        int currentVertex = queue[front++];

        printf("%d ", currentVertex);

        struct Node *temp = graph->adjLists[currentVertex];

        while (temp)
        {
            int adjVertex = temp->vertex;

            if (visited[adjVertex] == 0)
            {
                visited[adjVertex] = 1;

                queue[rear++] = adjVertex;
            }

            temp = temp->next;
        }
    }
}

int main()
{
    struct Graph *graph = createGraph(4);

    addEdge(graph, 0, 1); 
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);

    printf("BFS Traversal:\n");

    BFS(graph, 0);

    return 0;
}