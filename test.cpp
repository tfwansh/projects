"""insertion sort algorithm"""
"""write an insertion sort algortithm(one that takes in an array and sorts it)"""
"""insertion sort is a simple sorting algorithm that works by taking an unsorted array and finding the correct place for each element"""
"""insertion sort is a comparison sort, meaning that it will be O(n^2) in time complexity and O(1) in space complexity"""
"""insertion sort is a stable sort, meaning that the relative order of equal elements is preserved"""
"""insertion sort is a simple sorting algorithm that works by taking an unsorted array and finding the correct place for each element"""
===============================
void fnInsertionSort(A[]) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > key) {
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = key;
	}
}
void fnBogoSort(A[]){
	int i, j, k;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (A[j] > A[j + 1]) {
				k = A[j];
				A[j] = A[j + 1];
				A[j + 1] = k;
			}
		}
	}

}

void fnCalculator(){
	int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (A[j] > A[j + 1]) {
				k = A[j];
				A[j] = A[j + 1];
				A[j + 1] = k;
			}
		}
	}
}

"""function to return a joke"""
void fnJoke() 
{
	printf("What do you call a fake noodle?\n");
	printf("An Impasta!\n");

	printf("What do you call a pile of cats?\n");
	printf("A meow-pile!\n");

	printf("What do you call a pile of dead birds?\n");
	printf("A bop-pile!\n");

	printf("What do you call a pile of dead fish?\n");
	printf("A fish-pile!\n");

	printf("What do you call a pile of dead people?\n");
	printf("A people-pile!\n");

	printf("What is the best part about living in Switzerland?\n");
	printf("I don't know, but the flag is a big plus!\n");

	printf("Knock knock.\n");
	printf("Who's there?\n");
	printf("Interrupting cow.\n");
	printf("Interrupting cow who?\n");
	printf("MOO!\n");

	printf("Knock knock.\n");
	printf("Who's there?\n");
	printf("Interrupting pig.\n");
	printf("Interrupting pig who?\n");
	printf("OINK!\n");
}

void Story(){
	printf("Once upon a time, there was a farmer who lived in a field.\n");
	printf("He had a large field full of corn.\n");
	printf("One day, he saw a wolf running around the field.\n");
	printf("He ran to the wolf and said, \"I'm hungry.\"\n");
	printf("The wolf replied, \"You're hungry, too.\"\n");
	printf("The farmer replied, \"I'm not hungry.\"\n");
	printf("The wolf replied, \"You're not hungry, either.\"\n");
	printf("So the farmer and the wolf went back to the field.\n");
	printf("And then the farmer saw a goat running around the field.\n");
	printf("He ran to the goat and said, \"I'm hungry.\"\n");
	printf("The government replied, \"You're hungry, too.\"\n");
	printf("The farmer replied, \"I'm not hungry.\"\n");
	printf("The government replied, \"You're not hungry, either.\"\n");
	printf("So the farmer and the government went back to the field.\n");
	printf("And then the farmer saw a pig running around the field.\n");
	printf("He ran to the pig and said, \"I'm hungry.\"\n");
	printf("The pig replied, \"You're hungry, too.\"\n");
	printf("The farmer replied, \"I'm not hungry.\"\n");
	printf("The pig replied, \"You're not hungry, either.\"\n");
	printf("So the farmer and the pig went back to the field.\n");
	printf("And then the farmer saw a chicken running around the field.\n");
	printf("He ran to the chicken and said, \"I'm hungry.\"\n");
	printf("The chicken replied, \"You're hungry, too.\"\n");
	printf("The farmer replied, \"I'm not hungry.\"\n");
	printf("The chicken replied, \"You're not hungry, either.\"\n");
	printf("So the farmer and the chicken went back to the field.\n");
	printf("And then the farmer saw a horse running around the field.\n");
	printf("He ran to the horse and said, \"I'm hungry.\"\n");
	printf("The horse replied, \"You're hungry, too.\"\n");
	printf("The farmer replied, \"I'm not hungry.\"\n");
	printf("The horse replied, \"You're not hungry, either.\"\n");
	printf("So the farmer and the horse went back to the field.\n");
	printf("And then the farmer saw a cow running around the field.\n");
	printf("He ran to the cow and said, \"I'm batman.\"\n");
	printf("The cow replied, \"You're batman, too.\"\n");
	printf("The farmer replied, \"I'm not batman.\"\n");
	printf("The cow replied, \"You're not batman, either.\"\n");
	printf("So the farmer and the batman went back to the field.\n");
	printf("Then Newton was walking around the field.\n");
	printf("The farmer threw a apple at Newton.\n");
	printf("The farmer said, \"I'm hungry.\"\n");
	printf("Then Newton said, \"You're hungry, too.\"\n");
	printf("The farmer replied, \"I'm not hungry.\"\n");
	printf("Then Newton said, \"You're not hungry, either.\"\n");
	printf("So the farmer and the Newton went back to the field.\n");
	printf("Then Einstein was walking around the field.\n");


}



