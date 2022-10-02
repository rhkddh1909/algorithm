package util;

public class BinarySearchTree<T> {
	private TreeNode root;
	
	public <T> BinarySearchTree() {

	}
	
	public <T> BinarySearchTree(T element) {
		this.root = new TreeNode<T>(element);
	}
	
	public T getRoot() {
		return (T)this.root.getValue();
	}
	
	public <T> TreeNode search(T element) {
		TreeNode<T> newNode = new TreeNode<T>(element);
		TreeNode<T> currNode = this.root;
		while(true) {
			if((int)currNode.getValue() > (int)newNode.getValue()) {
				if(currNode.isLeftNull()) {
					return null;
				}
				else {
					currNode = currNode.getLeft();
				}
			}
			else if((int)currNode.getValue() < (int)newNode.getValue()){
				if(currNode.isRightNull()) {
					return null;
				}
				else {
					currNode = currNode.getRight();
				}
			}
			else {
				return currNode;
			}
		}
		
	}
	
	public <T> void add(T element) {
		TreeNode<T> newNode = new TreeNode<T>(element);
		TreeNode<T> currNode = this.root;
		while(true) {
			System.out.println("node check => "+currNode.getValue()+", "+newNode.getValue());
			if((int)currNode.getValue() > (int)newNode.getValue()) {
				if(currNode.isLeftNull()) {
					currNode.addLeft(newNode);
					newNode.addParents(currNode);
					break;
				}
				else {
					currNode = currNode.getLeft();
				}
			}
			else if((int)currNode.getValue() < (int)newNode.getValue()){
				if(currNode.isRightNull()) {
					currNode.addRight(newNode);
					newNode.addParents(currNode);
					break;
				}
				else {
					currNode = currNode.getRight();
				}
			}
		}
	} 
	
	public void remove(T element) {
		TreeNode delNode = search(element);
		if(delNode.isLeftNull() && delNode.isRightNull()) {
			if(delNode.equals(this.root)) {
				System.out.println("root는 지울 수 없습니다.");
			}
			delNode.addParents(null);
		}
		else if(!delNode.isLeftNull() && !delNode.isRightNull()) {
			TreeNode tmpNode = delNode.getRight();
			while(true) {
				if(tmpNode.isLeftNull()) {
					tmpNode.addRight(delNode.getParents());
					tmpNode.addLeft(delNode.getLeft());
					tmpNode.addRight(delNode.getRight());
					
					if(delNode.equals(this.root)) {
						this.root = tmpNode;
					}
					
					delNode.addParents(null);
					delNode.addRight(null);
					delNode.addLeft(null);
					
					break;
				}
				else {
					tmpNode = tmpNode.getLeft();
				}
			}
		}
		else if(!delNode.isLeftNull() || !delNode.isRightNull()){
			if(delNode.isLeftNull()) {
				delNode.getRight().addParents(delNode.getParents());
			}
			else {
				delNode.getLeft().addParents(delNode.getParents());
			}
			delNode.addParents(null);
		}
	}
	
	public T solution(T element) {
		TreeNode tmpNode = search(element);
		if(!tmpNode.isRightNull()){
			TreeNode ansNode = tmpNode.getRight();
			while(true) {
				if(ansNode.isLeftNull()) {
					return (T)ansNode.getValue();
				}
				else {
					ansNode = ansNode.getLeft();
				}
			}
		}
		else if((int)tmpNode.getValue() > (int)tmpNode.getParents().getValue()) {
			TreeNode ansNode = tmpNode.getParents();
			while(true) {
				if((int)ansNode.getValue() > (int)tmpNode.getValue()) {
					return (T)ansNode.getValue();
				}
				else {
					ansNode = ansNode.getParents();
					if(ansNode.equals(this.root)) {
						return null;
					}
				}
			}
		}
		else if((int)tmpNode.getValue() < (int)tmpNode.getParents().getValue()) {
			return (T)tmpNode.getParents().getValue();
		}
		else {
			return null;
		}

		
	}
}
