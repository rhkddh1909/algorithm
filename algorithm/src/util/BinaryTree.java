package util;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class BinaryTree<T> {
	private TreeNode root;
	private int min;
	private TreeNode ansNode;
	
	public BinaryTree(T element) {
		this.min = 999999999;
		this.root = new TreeNode(10);
	}
	
	public int getMin() {
		return this.min;
	}
	
	public TreeNode getRoot() {
		return this.root;
	}
	
	public List<Integer> getAnsList(){
		TreeNode currNode = this.ansNode; 
		List<Integer> ansList = new ArrayList<Integer>();
		while(true) {
			ansList.add((int)currNode.getValue());
			if(currNode.equals(this.root)) {
				break;
			}
			currNode = currNode.getParents();
		}
		Collections.reverse(ansList);
		
		return ansList;
	}
	
	public void searchMin(int value, TreeNode startNode) {
		int sum = (int)value+(int)startNode.getValue();
		TreeNode currNode = startNode;
		if(currNode.isLeftNull() && currNode.isRightNull()) {
			this.ansNode = this.min > sum ? currNode : this.ansNode;
			this.min = this.min > sum ? sum : this.min;
			 
		}
		else {
			if(!currNode.isLeftNull()) {
				searchMin(sum, currNode.getLeft());
			}
			if(!currNode.isRightNull()) {
				searchMin(sum, currNode.getRight());
			}
		}
	}
}
