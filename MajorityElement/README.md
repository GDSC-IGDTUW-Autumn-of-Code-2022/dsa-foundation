<h2><a href="https://leetcode.com/problems/make-the-string-great/">1544. Make The String Great</a></h2><h3>Easy</h3><hr><div><p>Given a string <code>s</code> of lower and upper case English letters.</p>
<p>A good string is a string which doesn't have two adjacent characters <code>s[i]</code> and <code>s[i + 1]</code> where:</p>
<ul>
	<li><code>0 &lt;= i &lt;= s.length-2</code></li>
	<li><code>s[i]</code> is a lower-case letter and <code>s[i + 1]</code> is the same letter but in upper-case or vice-versa.</li>
</ul>
<p>To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.</p>
<p>Return the string after making it good. The answer is guaranteed to be unique under the given constraints.</p>
<p><strong>Notice that an empty string is also good.</strong></p>
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "leEeetcode"
<strong>Output:</strong> "leetcode"
<strong>Explanation:</strong> In the first step, either you choose i = 1 or i = 2, both will result "leEeetcode" to be reduced to "leetcode".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong>  s = "abBAcC"
<strong>Output:</strong> ""
<strong>Explanation:</strong> We have many possible scenarios, and all lead to the same answer. For example:
"abBAcC" --> "aAcC" --> "cC" --> ""
"abBAcC" --> "abBA" --> "aA" --> ""
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong>  s = "s"
<strong>Output:</strong> "s"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code>contains only lower and upper case English letters. </li>
</ul>
</div>
