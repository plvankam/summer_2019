## HTML

![Mosaic Web Browser](https://web-development-class.readthedocs.io/en/latest/_images/mosaic.jpg)

HTML stands for Hyper-Text Markup Language. It was initially created during the years 1989-1992 
by [Tim Berners-Lee](http://en.wikipedia.org/wiki/Tim_Berners-Lee) while he worked at CERN, the 
European Laboratory for Particle Physics in Geneva, Switzerland. He wrote the first web client, 
[Mosaic](http://en.wikipedia.org/wiki/Mosaic_%28web_browser%29), which initially came out on the 
[NeXT](http://en.wikipedia.org/wiki/NeXT_Computer) computer. NeXT was a Steve Jobs creation 
during the time he was fired from Apple.

An interactive time-line that describes the evolution of the web is available
here with this gorgeous interactive website:
<http://evolutionofweb.appspot.com/>

A great video to watch is Robert X. Cringely’s Nerds 2.0.1.

### URLs

There are many parts to a URL:

![Parts of a URL](https://web-development-class.readthedocs.io/en/latest/_images/url.png)



Let’s break it down. The first part is the *protocol*. In this case, the protocol for moving the data is HyperText Transfer Protocol (HTTP). Other common protocols are `https` for encrypted data and `ftp` for old-school file transfer.

```
http://
```

Next is either the [domain name](http://en.wikipedia.org/wiki/Domain_Name_System), or the IP address. Because this is covered in detail in our Networking class, I won’t cover it here. If you haven’t taken a Networking class, you might want to read more about it.

```
http://webdev.training
```

Next *might* come the port. To tell web traffic from e-mail traffic, networks use port numbers. Web traffic usually goes over port 80 for unencrypted traffic, or port 443 for encrypted traffic. However a web address can specify something different. In this case, port 8080 is specified.

```
http://webdev.training:8080
```

Next might come the path. The path is the set of folders your file is in. If web files are in subdirectories on the host computer, you may see path names. Path names are separated by forward slashes, even though on windows path names are separated by back slashes. In this example we have two subdirectories, `directory` and `d2`.

```
http://webdev.training:8080/directory/d2/
```

Next up might come the file name. This usually corresponds to a file name on the server computer. In this case, the server will look for `file.php` in the `directory/d2/` path.

```
http://webdev.training:8080/directory/d2/file.php
```

The default HTML file extension is `.html`.

Because long ago, Microsoft Windows could not handle extensions with four characters, you sometimes see the extension `.htm` for backwards compatibility.

The `.html` extension is only good for static web pages. That is, web pages that you know won’t be customized or show current data. When we talk about PHP later this will be explained in detail. You may see extensions like `.php`, `.jsp`, `.asp`, and others. In our case, we can get used to using the `.php` extension.

The directory and filename part of a URL are case sensitive. There are some exceptions in regards to Windows servers not being case-sensitive, but developers should treat everything as case sensitive. To make it easier for development and for people using the URLs, it is good practice to make the URLs all lower case, and without spaces.

Note

To make things easier, name your files and directories all lower case. Also, use underscores instead of spaces.

Not all URLs have paths. By default, most servers will look for files like `index.html` and `index.php` if no file is specified. That means every directory should have an `index.html` file as a “landing” page.

Next up, *parameters*. These are variables that are passed to the file. A question mark separates the beginning part of the URL with the parameters. Each parameter is separated by an ampersand. In this case the parameter `name` has the value `paul` and the parameter `time` has the value `afternoon`.

```
http://webdev.training:8080/directory/d2/file.php?name=paul&amp;time=afternoon
```

Last, there is the *anchor*. This will “auto-scroll” to a spot in the web page rather that start the user at the top. The anchor is separated from the rest of the URL by a pound symbol. In this case the anchor is `article1`.

```
http://webdev.training:8080/directory/d2/file.php?name=paul&amp;time=afternoon#article1
```



| Tag          | Description                                                  |
| ------------ | ------------------------------------------------------------ |
| <a>          | Defines a hyperlink                                          |
| <address>    | Defines contact information for the author/owner of a document |
| <article>    | Defines an article                                           |
| <aside>      | Defines content aside from the page content                  |
| <b>          | Defines the document’s body                                  |
| <body>       | Defines the document’s body                                  |
| <br>         | Defines a single line break                                  |
| <div>        | Defines a section in a document                              |
| <em>         | Defines emphasized text                                      |
| <figcaption> | Defines a caption for a <figure> element                     |
| <figure>     | Specifies self-contained content                             |
| <footer>     | Defines a footer for a document or section                   |
| <h1> to <h6> | Defines HTML headings                                        |
| <head>       | Defines information about the document                       |
| <header>     | Defines a header for a document or section                   |
| <hr>         | Defines a thematic change in the content                     |
| <html>       | Defines the root of an HTML document                         |
| <i>          | Italics                                                      |
| <img>        | Defines an image                                             |
| <kbd>        | Defines keyboard input                                       |
| <li>         | Defines a list item                                          |
| <link>       | Defines the relationship between a document and an external resource (most used to link to style sheets) |
| <main>       | Specifies the main content of a document                     |
| <meta>       | Defines metadata about an HTML document                      |
| <nav>        | Defines navigation links                                     |
| <ol>         | Defines an ordered list                                      |
| <p>          | Defines a paragraph                                          |
| <pre>        | Defines preformatted text                                    |
| <script>     | Defines a client-side script                                 |
| <section>    | Defines a section in a document                              |
| <small>      | Defines smaller text                                         |
| <span>       | Defines a section in a document                              |
| <strong>     | Defines important text                                       |
| <style>      | Defines style information for a document                     |
| <sub>        | Defines subscripted text                                     |
| <summary>    | Defines a visible heading for a <details> element            |
| <sup>        | Superscripted text                                           |
| <title>      | Title for the document. Should be in head tag, shows up as title name but not on page. |
| <u>          | Underline                                                    |



## Tag Attributes



HTML tags can have attributes. For example, the <a> tag allows us to create links to other pages and websites:

&lt;a>My link</a>

We can specify not only the link text, but where the link goes:

&lt;a href="http://webdev.training">My link</a>



## Example Document Structure



```
!-- Basic 01_HTML document. Remove comments for your own document. -->

<!-- This says the document is an HTML5 document. -->
<!DOCTYPE html>

<!-- All the 01_HTML goes in the 01_HTML tags. We also tell the browser that the
     language of the document is English because of the "en". Go here:
     https://www.loc.gov/standards/iso639-2/php/code_list.php for a full list. -->
<html lang="en">

<!-- The head has meta-info about the document that doesn't show up on the
     document, but instead is about the document. Confusingly, many
     documents also have a "header" which is at the top of the document
     and totally different than the head. Also, HTTP, the way we transfer
     01_HTML over the internet, has its own 'head' section. -->
<head>
  <!-- Specify how the letters are encoded. For Cyrillic, Kanji, Spanish
       characters, etc. The world has mostly standardized on UTF-8, so
       you can use it for about anything.
       For more info on character sets, see:
       https://youtu.be/MijmeoH9LT4
       -->
  <meta charset="utf-8">

  <!-- The title is what will be used when you bookmark a site, or the text
       that's on the tab. -->
  <title>Sample HTML5 Document</title>

</head>

<!-- All things that appear in the document are in the body.
     A document should have only one head, and only one body. Don't put the
     head in the body, or the body on top of the head. That's just weird. -->
<body>
  <p>Sample Document</p>
</body>
</html>
```

##  

## Tables



| Tag     | Description                                                  |
| ------- | ------------------------------------------------------------ |
| <table> | Surrounds the entire table                                   |
| <tr>    | Surrounds cells in a row                                     |
| <td>    | Surrounds a cell. Can use attributes `rowspan` and `colspan` to span multiple rows or columns. |
| <th>    | Surrounds a header cell.                                     |
| <thead> | Optional, usually surrounds the header row(s)                |
| <tbody> | Optional, surrounds the main data rows                       |
| <tfoot> | Optional, surrounds the summary/footer rows                  |

## More Information

### Books, Books, and More Books

What we will learn in this class only scratches the surface of what there is to learn. Take time to look at the resources that are available at [Dunn Library](http://www.simpson.edu/library/). Search for HTML, HTML5, CSS, CSS3, and PHP. Spend some time in the library and bookstores to see what is available.

### Websites

I really like [W3Schools](http://w3schools.com">w3schools.com) for tutorials and as a reference on HTML and many other web technologies. Do note that they do not have anything to do with the W3C organization, and there is some hate for them on the Internet. Plus the “certifications” they sell for passing tests aren’t really worth anything.

### Viewing HTML

Did you know you can see the HTML of any web page? When a web page is up, right-click and select “view source” or type Ctrl-U. Is that too much HTML to wade through? Only want to see the HTML of a particular element? Right click on it and select “inspect element.” Browsers have a “debug” menu available by hitting the F12 key. Give it a try. Browsers offer many developer add-ons. For example, [Firebug](https://addons.mozilla.org/en-US/firefox/addon/firebug/) is a popular add-on for Firefox. The built-in tools are good enough I rarely use add-ons anymore, but you should know they are out there.

### Validating HTML

The [CSE HTML Validator](http://www.htmlvalidator.com/) is great for HTML work. You can use it to load a URL and check if for correctness. You can have it automatically check as you browse a website. It can even scan an entire website for errors in “batch” mode. CSE Validator has an option under “Tools” for “Pretty Print/Fix.” This will clean up the HTML formatting to make it easier to read. This can be useful in learning techniques to make your HTML readable and structured. If you don’t want to shell out money, you can few a page’s source, copy it, and then paste it into Introduce [W3C](http://validator.w3.org/) for validation. This isn’t as convenient, and you’ll lose time compared to HTML Validator, but it does work if you are on a budget.



### HTML Sample Document

```
<!DOCTYPE html>
<!-- Sample document by Paul Craven
     This is an 01_HTML comment.
     The browser ignores it.
     But a user could see it by doing 'view source'.
-->
<html lang="en">

  <head>
    <title>Example HTML Document</title>
  </head>

  <body>
    <h1>Example HTML Document</h1>
    <p>This document covers several standard elements of an HTML document.</p>
    <p>You can find a good explanation of these elements and more at
    <a href='http://www.w3schools.com/html/'>W3Schools</a>.</p>

    <h2>Basic Tags</h2>
    <p>This<br />shows<br />how<br />to<br />use<br />a<br />line<br />break<br />tag.</p>
    <p>This is <b>bold</b> text. This is <i>italicized</i> text.</p>
    <p>x<sup>2</sup> = 10</p>
    <p>This is formatted <kbd>in keyboard</kbd> style.</p>
    <pre>
    This is preformatted
    text that is displayed
    as-is.
    </pre>

    <h2>Lists</h2>

    <h3>Unordered lists</h3>
    <ul>
      <li>Item 1</li>
      <li>Item 2</li>
      <li>Item 3</li>
    </ul>

    <h3>Unordered lists</h3>
    <ol>
      <li>Item 1</li>
      <li>Item 2</li>
      <li>Item 3</li>
    </ol>

    <h2>Images</h2>
    <img alt='sample local image' src='myimage.jpg'>
    <br />
    <img alt='Simpson Logo' src='http://simpson.edu/wp-content/themes/simpson/assets/img/logo-desktop.png'>
    <br />
    <img alt='Simpson Logo Big'
         src='http://simpson.edu/wp-content/themes/simpson/assets/img/logo-desktop.png'
         width='600'>

    <h2>Tables</h2>
    <table>
      <tr>
        <th>Heading 1</th>
        <th>Heading 2</th>
        <th>Heading 3</th>
      </tr>
      <tr>
        <td>Cell 1</td>
        <td>Cell 2</td>
        <td>Cell 3</td>
      </tr>
      <tr>
        <td colspan='2'>Cell 1</td>
        <td>Cell 3</td>
      </tr>
    </table>

    <h2>HTML Entities</h2>

    <p>Ampersand: &amp;</p>
    <p>Less than: &lt;</p>
    <p>Greater than: &gt;</p>
    <p>Copyright: &copy;</p>
    <p>None-breaking space: These&nbsp;words&nbsp;won't&nbsp;wrap.</p>

    <h2>Forms</h2>
    <form action='processing_page.html'>
      Text field: <input name='sample_text_field' type='text'><br/>
      Password field: <input name='password' type='password'><br/>
      <input name="buttonset" value="1" type="radio"> Radio button 1<br/>
      <input name="buttonset" value="2" type="radio"> Radio button 2<br/>
      <input name="buttonset" value="1" type="checkbox"> Check box 1<br/>
      <input name="buttonset" value="2" type="checkbox"> Check box 2<br/>
      <input type="submit">
    </form>
  </body>

</html>
```
