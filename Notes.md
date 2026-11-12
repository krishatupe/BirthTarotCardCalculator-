# Web Basics Notes

Quick reference from building the Birth Tarot Card project.
Three files, three jobs: HTML = structure, CSS = looks, JavaScript = behavior.



## 1. index.html (structure)

- **Tags come in pairs:** `<p>text</p>`. Open it, close it.
- **Exceptions have no closing tag:** `<input>`.
- **Heading vs paragraph:** `<h1>` is for short titles, `<p>` is for body text.
- **Attributes** live inside the opening tag: `name="value"`. Example: `type="date"`.
- **id** is a unique name for one element, so CSS and JS can find it.
- **Content vs tag:** everything after an opening tag's `>` shows on the page. An id placed there becomes visible text.
- **Visible page** = everything between `<body>` and `</body>`.
- **Script link** goes at the bottom of body, so the elements exist before JS runs.


## 2. style.css (looks)

**A rule has three parts:**

    selector { property: value; }

- **Selectors:** `#name` picks by id. `body` or `h1` picks by tag.
- **color** is text color. **background-color** is the fill behind it.
- **Hex colors:** `#` plus six characters, only 0-9 and a-f. One wrong character and the whole line is ignored.
- **margin** is space outside an element (`margin-top`, `margin-bottom`).
- **padding** is space inside an element, between its edge and content.
- **font-family** takes a list, ending with a fallback like `serif`.
- **text-align** takes `left`, `center`, `right` or `justify`.
- **Typos fail silently.** `baground-color` did nothing and gave no error.
- **Every property line ends with `;`.**


## 3. script.js (behavior)

- **Find an element:** `document.getElementById("id")`
- **Store a value:** `let name = value;`
- **Run on click:** `button.addEventListener("click", function(){ ... })`
- **Read user input:** `box.value`
- **Show a popup:** `alert(...)`
- **Cut text into a list:** `"2006-08-15".split("-")` gives `["2006","08","15"]`
- **List slots count from 0:** `parts[0]` is the first piece.
- **Names must match exactly.** `parts` and `part` are different variables.
- **Case matters.** `getElementById` is not `getelementbyid`.
- **A date input's value** is text, year first: `YYYY-MM-DD`.
- **Text plus text glues** (`"20" + "06"` gives `"2006"`). It does not add.


## 4. Debugging habits

1. Change one thing, then test.
2. Predict the result before testing.
3. Compare names and spelling character by character.
4. Check the Console (the `>_` icon) for red error text.
5. Check that every `{` has a `}` and every `(` has a `)`.
6. Save, then look at the preview.


## 5. GitHub

- **One repository** holds the whole project (all files together).
- Keep `index.html`, `style.css` and `script.js` in the main folder.
- Put the C program in its own folder: `c-version/tarot.c`.
- **Commit** means save a version.
- Add a description, topics and a README so the project is easy to find.
- GitHub Pages turns the repo into a live website.
