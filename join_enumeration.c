//dedomena eisodou:
// - ta join tis priorityQueue
// - stat_holder sh
//

BestTree join_enumeration(Queue *q, stat_holder* sh) {
	BestTree* bt;
	Cost* costs;
	int n = q->size;
	int t_n = factorial(n+1);

	bt = malloc(t_n*sizeof(BestTree));
	costs = malloc(t_n*sizeof(Cost));

	//initialize bt to single relation
	for (int i = q->front; i < n; i++)
		if (q->array[i]->op == 0)
			addToBestTree(bt, q->array[i]->t1, q->array[i]->t2);

	//initialize costs
	for (int i = 0; i < n; i++) {

	}

	//increasing length of relations to check
	for (int i = 0; i < n; i++) {
		//take i rel(s) from pred_list
			//for that i rel(s) take another i rel(s) without taking the same
				//if !connected
					//continue
				//create currTree
				//create union of the two sets of i rel(s)
				//if BestTree(union) == null or cost(BestTree(union)) > cost(currTree)
					//BestTree(union) = currTree
	}

	return bt;
}


//MALLON JOINTREE KAI BESTTREE IDIA SINARTISI, MPOREI KAI OXI, PROXWRAME

BestTree createJoinTree(int relNum) {
	node* root[relNum+1] = {NULL};


}

BestTree createBestTree(int relNum) {
	node* root[relNum+1] = {NULL};
}

void insert(int key, const char* buffer) {
    // try to instantiate node to insert word
    node* newptr = malloc(sizeof(node));
    if (newptr == NULL)
    {
        return;
    }

    // make a new pointer
    strcpy(newptr->word, buffer);
    newptr->next = NULL;

    // check for empty list
    if (first[key] == NULL)
    {
       first[key] = newptr;
    }
    // check for insertion at tail
    else
    {
        node* predptr = first[key];
        while (true)
        {
            // insert at tail
            if (predptr->next == NULL)
            {
                predptr->next = newptr;
                break;
            }

            // update pointer
            predptr = predptr->next;
        }
    }
}

int hashing(int* pred_int, int l) {
	int h = 0;

	for (int i = 0; i < l; i++) {
		pred_int[i]++;

		pred_int[i] = factorial(pred_int[i]);

		h += pred_int[i];
	}

	return h;
}

int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * factorial(n-1);
}

int cost(stat_holder* sh) {
    int c = 0;

	if (column with num) {

	}
	else if (column between nums) {

	}
    else if (same table) {

    }
    else if (different table) {

    }
	else if (same column same table) {

	}

    return c;
}

void addToBestTree(BestTree *bt, data t1, data t2) {
	//check if t1 already in bt
		//if not add t1

	//check if t2 already in bt
		//if not add t2
}

Cost createHashCost() {

}
