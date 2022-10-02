package util;

class TreeNode<T> {
	private TreeNode parents;
	private T value;
	private TreeNode right;
	private TreeNode left;
	
	public TreeNode(T value) {
		this.value = value;
	}
	
	public T getValue() {
		return this.value;
	}
	
	public boolean isRightNull() {
		if(this.right == null) {
			return true;
		}
		else {
			return false;
		}
	}
	
	public boolean isLeftNull() {
		if(this.left == null) {
			return true;
		}
		else {
			return false;
		}
	}
	
	public TreeNode getRight() {
		return this.right;
	}
	
	public TreeNode getLeft() {
		return this.left;
	}
	
	public TreeNode getParents() {
		return this.parents;
	}
	
	public void addRight(TreeNode right) {
		this.right = right;
	}
	
	public void addLeft(TreeNode left) {
		this.left = left;
	}
	
	public void addParents(TreeNode parents) {
		this.parents = parents;
	}
}