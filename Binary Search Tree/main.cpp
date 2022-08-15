// C++ code file for the Binary Search Tree Assignment
// Include the neccessary libraries for this program
#include <iostream>
#include <cstdlib>




// Defines the node for the bst
// Gives the node a structure
// Makes sure each node has a value and is able to point to 2 other nodes for th tree
struct node {
	int value;
	struct node* lchild;
	struct node* rchild;};




// Create a new node that will appear in the bst
// Set the value of the node
// Makes sure the left and right pointers are not pointing towards anything
// Returns a pointer of the newly created node
node *createNewNode(int value) {
	node* createNode = new node();
	createNode -> value = value;
	createNode -> lchild = NULL;
	createNode -> rchild = NULL;
	return createNode;}




// This will insert the node into the bst
// It will determine the placement of the node depending on the int value
// Return the location of the node
node *insertNewNode(node* k, int value) {
	// in the case the bst is empty
	//std::cout << value  << std::endl;
	//std::cout << value  << std::endl;
	if( k == NULL ){ 
		// gets  new node
	//	std::cout << value  << std::endl;
		k = createNewNode(value); }
	// in the case the value is less than the node, send the value to the left subtree
	else if ( value <= (k -> value) ) {
//	std::cout << value  << std::endl;
		// checks to see if there is a value assigned to this spot in the tree
	//	if ( k -> value = NULL) {
			// inserts the node into the left subtree
			k -> lchild = insertNewNode( k -> lchild, value);}
	// in the case the value is greater than the node, sent the value to the right subtree
	else /* ( value > k -> value ) */{
		// checks to see if there is a value assigned to this spot in the tree
	//	if ( k -> value = NULL ){
			// inserts the node into the right subtree
			k -> rchild = insertNewNode( k -> rchild, value);}
	//std::cout << k -> rchild  << std::endl;}}
	// even though there will be no user inputs for values, this would ensure no repeated numbers in the bst
	// if the value is neither greater than or less than the node, it must already be in the bst
//	else {
//		std::cout << "This value is already in the Binary Search Tree" << std::endl; } 
	// return the address of the node
	return k;} 




// This function will go through the binary tree to find the minimum
node *searchMinNode( node *k, int value ) {
	if(k == NULL){
        std::cout << "The tree is empty." << std::endl;}
	// just keeps going as far left it can in the tree until the minimum value is reached
	// std::cout << value << std::endl;
	else if ( k -> lchild != NULL) {
		// keeps going left
		k = k -> lchild;}
	k -> value = value;
	std::cout << "This value is: " << k -> value << std::endl;	
	// returns the min value
	return k;} // ends the searchMin node function
		



// This function will remove a node from the bst
node *removeNode(node* k, int value) {
	// in the case the bst is empty
        if( k == NULL ) {
		// return nothing
		return k; }
	// in the case the value is less than the node, send the value to the left subtree
	else if ( value < k -> value ) {
		// checks to see if there is a value assigned to this spot in the tree
	//	if ( k -> value != NULL) {
			// removes the value from the left subtree
			k -> lchild = removeNode( k -> lchild, value);}
	// in the case the value is greater than the node, sent the value to the right subtree
	else if ( value > k -> value ) {
		// checks to see if there is a value assigned to this spot in the tree
	//	if ( k -> value != NULL ){
			// deletes the value from the right subtree
			k -> rchild = removeNode( k -> rchild, value);}
	// if there is a NULL value in one of the spots in the bst
	else {
		// if both of the pointers of the value are empty
		if ( k -> rchild == NULL && k -> lchild == NULL ) {
			// removes the k value and give it a NULL value
			delete k;
			k = NULL;}
		// if only the right pointer has a NULL value
		else if ( k -> rchild = NULL ) {
			node *temp = k;
			k = k -> rchild;
			delete temp; }
		// if only the left pointers of the value are empty
		else if ( k -> lchild = NULL ) {
			node *temp = k;
			k = k -> lchild;
			delete temp; }}
	return k;} // end remove node function

/*
bool Node(node *k, int value)
{
    if (k == NULL) {
        std::cout << "NULL" << std::endl;
	return false; }
    else if (value == k->value)
        return true;
    else if (value <= k->value)
        return Node(k -> lchild, value);
    else
        return Node(k ->rchild, value);
}
*/

// Function that will print the values in order
node *printValues(node *k, int value){
	// if the value isn't NULL then run the code
	//std::cout <<  lchild << std::endl;
	if (k != NULL){
		// if the left child isnt NULL then print
		if (k -> lchild != NULL){
			printValues( k -> lchild, value);}
		// same for the right
		if (k -> rchild != NULL){
			printValues( k -> rchild, value);}}
	else {
		std::cout << "No values to print" << std::endl;}}
/*
int pNode(node* k, int value){
	if(k != NULL){
		if( k -> value = value){
			return pNode(k, value);}
	else{
		if( k -> value > value){
			return pNode(k -> lchild, value);}
		else{
			return pNode(k -> rchild, value);}}}
	else{
		return NULL;}}

// Function that will print the tree
void printBST(node *k) {
	if ( k != value) {
		printTree(k -> lchild);
		std::cout ,, k -> value << "; ";
		printTree(k -> rchild);}}
*/


// this will print the binary tree and the properties of it
void tree(node *k){
//	node *k = pNode(k, value);
	if (k != NULL){
		std::cout <<"Parent of the tree: " << k -> value << std::endl;
		k -> lchild == NULL ?
		std::cout << "Left = NULL " << std::endl :
		std::cout << "Left Child = " << k -> lchild -> value << std::endl;
		k -> rchild == NULL ?
		std::cout << "Right = NULL " << std::endl :
		std::cout << "Right Child = " << k -> rchild -> value << std::endl;
}
    else{
	false;
		}}


// function used to print the elements of the tree in order
void order(node *k){
	if (k != NULL){
		order(k -> lchild);
		std::cout << k -> value << " -> ";
		order(k -> rchild);}}

	
// Start the main function the entire program will run through
int main() {
	// Create an array of the numbers given in the assignment
	int treeValues[15] = {6, 17, 20, 41, 45, 52, 57, 65, 71, 76, 79, 87, 92, 95, 99};
	
	// Create a function to get the size of the array 
	int treeSize = sizeof(treeValues)/sizeof(treeValues[0]);
	
	// Create a variable that splits the size of the array in half to make the left and right subtrees
	int halfTree = treeSize / 2;
	
	// Assign the halfTree values to the left and right trees
	int leftTree = halfTree;
	int rightTree = halfTree;

	// Create a empty binary tree
	node *k = NULL;
	
	// Add the middle value of the array into the bst
	k = insertNewNode(k, treeValues[halfTree]);
	//std::cout << treeValues[halfTree] << std::endl;
	// Create a loop that loops through the entire length of the array 
	for(int i = 0; i < halfTree; i++){
		// Subtract the left side and add the right side of the tree
		leftTree = leftTree - 1;
	
		rightTree = rightTree + 1;
	//std::cout << treeValues[rightTree] << std::endl;
		// add the values to the bst
		k = insertNewNode(k, treeValues[leftTree]);
		k = insertNewNode(k, treeValues[rightTree]);
	//	std::cout << k << std::endl;
	}	//printValues(k, treeValues[leftTree]);
		//printValues(k, treeValues[rightTree]);}
	// prints the tree
	tree(k);
	std::cout << "\n" << std::endl;
	// prints the elements in the tree in oder
	std::cout << "\nThe Elements in order" << std::endl;
	order(k);
	std::cout << "\n" << std::endl;	
	//std::cout << search(k, 99) << std::endl;
	// make a variable for the kth smallest element
	//I TRIED BUT I COULDNT DO IT
	std::cout << "\nThe Binary Search Tree" << std::endl;
	std::cout << "--------------65--------------" << std::endl;
	std::cout << "------41--------------87------" << std::endl;
        std::cout << "--17------52------76------95--" << std::endl;
        std::cout << "-6--20--45--57--71--79--92--99" << std::endl;
	int kth;
	// take the user input of the kth smallest element
	std::cout << "\nwhich smallest element you would like to see: " << std::endl;
	std::cin >> kth;
	// remove the values and trees that are below the kth element in the array
	int y = kth - 1;
	for (int x = 0; x < y; x++){
		if (kth > treeSize){
			std::cout << "The " << kth << " element is not available " << std::endl;
			exit(0);}
	int z = treeValues[x];
	//std::cout << z << std::endl;
	removeNode(k, z);}
	// search for the min node and print it
	int z = treeValues[y];
	searchMinNode(k, z);
	return 0;}
// end of the program
















