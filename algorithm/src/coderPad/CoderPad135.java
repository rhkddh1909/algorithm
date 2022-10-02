package coderPad;

import java.util.Collections;

import util.BinaryTree;
import util.TreeNode;

public class CoderPad135 {
	public static void main(String args[]) {
		BinaryTree<Integer> tree = new BinaryTree<Integer>(10);
		
		TreeNode<Integer> tmpTree = tree.getRoot();
		tmpTree.addLeft(new TreeNode(5));
		tmpTree.addRight(new TreeNode(5));
		TreeNode<Integer> ltree = tmpTree.getLeft();
		TreeNode<Integer> rtree = tmpTree.getRight();
		
		ltree.addRight(new TreeNode(2));
		ltree.addLeft(new TreeNode(-123123));
		rtree.addRight(new TreeNode(1));
		rtree = rtree.getRight();
		rtree.addLeft(new TreeNode(-1));
		ltree = rtree.getLeft();
		ltree.addLeft(new TreeNode(-1231231231));
		
		tree.searchMin(0, tree.getRoot());
		
		System.out.println(tree.getMin());
		
		System.out.println(tree.getAnsList());
		System.out.println(tree.getAnsList());
		System.out.println(tree.getAnsList());
	}
}
