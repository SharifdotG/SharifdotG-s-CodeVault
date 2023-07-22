<span style="display:none;" class="csrf-token" data-csrf="e693a907ece8a5f3d724691285a3788b"> </span><script type="text/javascript">String.prototype.hashCode = function() { var hash = 0, i, chr; if (this.length === 0) return hash; for (i = 0; i < this.length; i++) { chr = this.charCodeAt(i); hash = ((hash << 5) - hash) + chr; hash |= 0; // Convert to 32bit integer } return hash; }; var queryMobile = Codeforces.queryString.mobile; if (queryMobile === "true" || queryMobile === "false") { Codeforces.putToStorage("useMobile", queryMobile === "true"); } else { var useMobile = Codeforces.getFromStorage("useMobile"); if (useMobile === true || useMobile === false) { if (useMobile != false) { Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", useMobile)); } } }</script> <script type="text/javascript">if (window.parent.frames.length > 0) { window.stop(); }</script> <script type="text/javascript">$(document).ready(function () { (function () { jQuery.expr[':'].containsCI = function(elem, index, match) { return !match || !match.length || match.length < 4 || !match[3] || ( elem.textContent || elem.innerText || jQuery(elem).text() || '' ).toLowerCase().indexOf(match[3].toLowerCase()) >= 0; } }(jQuery)); $.ajaxPrefilter(function(options, originalOptions, xhr) { var csrf = Codeforces.getCsrfToken(); if (csrf) { var data = originalOptions.data; if (originalOptions.data !== undefined) { if (Object.prototype.toString.call(originalOptions.data) === '[object String]') { data = $.deparam(originalOptions.data); } } else { data = {}; } options.data = $.param($.extend(data, { csrf_token: csrf })); } }); window.getCodeforcesServerTime = function(callback) { $.post("/data/time", {}, callback, "json"); } window.updateTypography = function () { $("div.ttypography code").addClass("tt"); $("div.ttypography pre>code").addClass("prettyprint").removeClass("tt"); $("div.ttypography table").addClass("bordertable"); prettyPrint(); } $.ajaxSetup({ scriptCharset: "utf-8" ,contentType: "application/x-www-form-urlencoded; charset=UTF-8", headers: { 'X-Csrf-Token': Codeforces.getCsrfToken() }}); window.updateTypography(); Codeforces.signForms(); setTimeout(function() { $(".second-level-menu-list").lavaLamp({ fx: "backout", speed: 700 }); }, 100); Codeforces.countdown(); $("a[rel='photobox']").colorbox(); function showAnnouncements(json) { //info("j=" + JSON.stringify(json)); if (json.t != "a") { return; } setTimeout(function() { Codeforces.showAnnouncements(json.d, "en"); }, Math.random() * 500); } function showEventCatcherUserMessage(json) { if (json.t == "s") { var points = json.d[5]; var passedTestCount = json.d[7]; var judgedTestCount = json.d[8]; var verdict = preparedVerdictFormats[json.d[12]]; var verdictPrototypeDiv = $(".verdictPrototypeDiv"); verdictPrototypeDiv.html(verdict); if (judgedTestCount != null && judgedTestCount != undefined) { verdictPrototypeDiv.find(".verdict-format-judged").text(judgedTestCount); } if (passedTestCount != null && passedTestCount != undefined) { verdictPrototypeDiv.find(".verdict-format-passed").text(passedTestCount); } if (points != null && points != undefined) { verdictPrototypeDiv.find(".verdict-format-points").text(points); } Codeforces.showMessage(verdictPrototypeDiv.text()); } } $(".clickable-title").each(function() { var title = $(this).attr("data-title"); if (title) { var tmp = document.createElement("DIV"); tmp.innerHTML = title; $(this).attr("title", tmp.textContent || tmp.innerText || ""); } }); $(".clickable-title").click(function() { var title = $(this).attr("data-title"); if (title) { Codeforces.alert(title); } else { Codeforces.alert($(this).attr("title")); } }).css("position", "relative").css("bottom", "3px"); Codeforces.showDelayedMessage(); Codeforces.reformatTimes(); //Codeforces.initializePubSub(); if (window.codeforcesOptions.subscribeServerUrl) { window.eventCatcher = new EventCatcher( window.codeforcesOptions.subscribeServerUrl, [ Codeforces.getGlobalChannel(), Codeforces.getUserChannel(), Codeforces.getUserShowMessageChannel(), Codeforces.getContestChannel(), Codeforces.getParticipantChannel(), Codeforces.getTalkChannel() ] ); if (Codeforces.getParticipantChannel()) { window.eventCatcher.subscribe(Codeforces.getParticipantChannel(), function(json) { showAnnouncements(json); }); } if (Codeforces.getContestChannel()) { window.eventCatcher.subscribe(Codeforces.getContestChannel(), function(json) { showAnnouncements(json); }); } if (Codeforces.getGlobalChannel()) { window.eventCatcher.subscribe(Codeforces.getGlobalChannel(), function(json) { showAnnouncements(json); }); } if (Codeforces.getUserChannel()) { window.eventCatcher.subscribe(Codeforces.getUserChannel(), function(json) { showAnnouncements(json); }); } if (Codeforces.getUserShowMessageChannel()) { window.eventCatcher.subscribe(Codeforces.getUserShowMessageChannel(), function(json) { showEventCatcherUserMessage(json); }); } } Codeforces.setupContestTimes("/data/contests"); Codeforces.setupSpoilers(); Codeforces.setupTutorials("/data/problemTutorial"); });</script> <script type="text/javascript">var _gaq = _gaq || []; _gaq.push(['_setAccount', 'UA-743380-5']); _gaq.push(['_trackPageview']); (function () { var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true; ga.src = (document.location.protocol == 'https:' ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js'; var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s); })();</script>

<div id="body">

<div class="side-bell" style="visibility: hidden; display: none; opacity: 0.7; width: 40px; position: fixed; right: 0; top: 0; cursor: pointer; text-align: center; line-height: 35px; color: #d3dbe4; font-weight: bold; font-size: 1.5rem;"><span class="icon-stack" style="width: 100%;"></span>  
<span class="side-bell__count" style="position: relative; top: -10px;"></span></div>

<div id="header" style="position: relative;">

<div style="float:left; max-height: 60px;">[![Codeforces](//codeforces.org/s/49634/images/codeforces-sponsored-by-ton.png "Codeforces")](/)</div>

<div class="lang-chooser">

<div style="text-align: right;">[![In English](//codeforces.org/s/49634/images/flags/24/gb.png "In English")](?locale=en) [![По-русски](//codeforces.org/s/49634/images/flags/24/ru.png "По-русски")](?locale=ru)</div>

<div>[Enter](/enter?back=%2Fproblemset%2Fproblem%2F1850%2FH) | [Register](/register)</div>

</div>

</div>

<div class="roundbox menu-box borderTopRound borderBottomRound" style="">

<div class="menu-list-container">

*   [Home](/)
*   [Top](/top)
*   [Catalog](/catalog)
*   [Contests](/contests)
*   [Gym](/gyms)
*   [Problemset](/problemset)
*   [Groups](/groups)
*   [Rating](/ratings)
*   [<span class="edu-menu-item">Edu</span>](/edu/courses)
*   [API](/apiHelp)
*   [Calendar](/calendar)
*   [Help](/help)

<form method="post" action="/search"><input type="hidden" name="csrf_token" value="e693a907ece8a5f3d724691285a3788b"> <input class="search" name="query" data-isplaceholder="true" value=""></form>

</div>

</div>

<script type="text/javascript">$(document).ready(function () { $("input.search").focus(function () { if ($(this).attr("data-isPlaceholder") === "true") { $(this).val(""); $(this).removeAttr("data-isPlaceholder"); } }); });</script>  

<div style="position: relative;">

<div id="sidebar">

<div class="roundbox sidebox borderTopRound " style="">

<table class="rtable ">

<tbody>

<tr>

<th class="left" style="width:100%;">[Codeforces Round 886 (Div. 4)](/contest/1850)</th>

</tr>

<tr>

<td class="left bottom" colspan="1"><span class="contest-state-phase">Finished</span></td>

</tr>

</tbody>

</table>

</div>

<div class="roundbox sidebox ContestVirtualFrame borderTopRound " style="">

<div class="caption titled">→ Virtual participation</div>

<div style=" " data-page-url="/data/sidebarFrames">

<div style="margin:1em;font-size:0.8em;">Virtual contest is a way to take part in past contest, as close as possible to participation on time. It is supported only ICPC mode for virtual contests. If you've seen these problems, a virtual contest is not for you - solve these problems in the archive. If you just want to solve some problem from a contest, a virtual contest is not for you - solve this problem in the archive. Never use someone else's code, read the tutorials or communicate with other person during a virtual contest.</div>

<div style="text-align:center;margin:1em;">

<form action="/contest/1850/virtual" method="get"><input type="submit" name="submit" value="Start virtual contest" style="padding:0 0.5em;"></form>

</div>

</div>

<script>$(function () { $(".ContestVirtualFrame .sidebar-caption-icon").click(function() { $(this).toggleClass("la-angle-down la-angle-right"); const $target = $(this).parent().next(); $target.toggle(); const dataPageUrl = $target.attr("data-page-url"); const collapsed = $(this).hasClass("la-angle-right"); const params = { action: "setCollapsed", sidebarFrameSimpleClassName: "ContestVirtualFrame", collapsed }; $.each($target[0].attributes, function(i, a) { const name = a.name; if (name.startsWith("data-extra-key-")) { const key = a.value; const keyIndex = parseInt(name.substring("data-extra-key-".length)); const value = $target.attr("data-extra-value-" + keyIndex); params[key] = value; } }); $.post(dataPageUrl, params, function (result) { if (result["success"] !== "true") { Codeforces.showMessage("Failed to save collapsed state."); } }, "json"); return false; }); })</script></div>

<div class="roundbox sidebox borderTopRound " style="">

<div class="caption titled">→ Problem tags</div>

<div style="padding: 0.5em;">

<div class="roundbox  borderTopRound borderBottomRound" style="margin:2px; padding:0 3px 2px 3px; background-color:#f0f0f0;float:left;"><span class="tag-box" style="font-size:1.2rem;" title="Dfs and similar">dfs and similar</span></div>

<div class="roundbox  borderTopRound borderBottomRound" style="margin:2px; padding:0 3px 2px 3px; background-color:#f0f0f0;float:left;"><span class="tag-box" style="font-size:1.2rem;" title="Graphs">graphs</span></div>

<div class="roundbox  borderTopRound borderBottomRound" style="margin:2px; padding:0 3px 2px 3px; background-color:#f0f0f0;float:left;"><span class="tag-box" style="font-size:1.2rem;" title="Greedy algorithms">greedy</span></div>

<div class="roundbox  borderTopRound borderBottomRound" style="margin:2px; padding:0 3px 2px 3px; background-color:#f0f0f0;float:left;"><span class="tag-box" style="font-size:1.2rem;" title="Implementation problems, programming technics, simulation">implementation</span></div>

<div style="clear:both;text-align:right;font-size:1.1rem;"><span title="Please login into the Codeforces" class="notice">No tag edit access</span></div>

</div>

</div>

<form id="addTagForm" action="/data/problemTags" method="post" style="display:none;"><input type="hidden" name="csrf_token" value="e693a907ece8a5f3d724691285a3788b"> <input name="action" type="hidden" value="addTag"> <input name="problemId" type="hidden" value="2083774"> <input name="tagName" type="hidden" value=""></form>

<form id="removeTagForm" action="/data/problemTags" method="post" style="display:none;"><input type="hidden" name="csrf_token" value="e693a907ece8a5f3d724691285a3788b"> <input name="action" type="hidden" value="removeTag"> <input name="problemId" type="hidden" value="2083774"> <input name="tagName" type="hidden" value=""></form>

<script type="text/javascript">$(".tag-box img").click(function () { var tagName = $(this).attr("value"); Codeforces.confirm("Are you sure you want to remove this tag?", function () { $("#removeTagForm input[name=tagName]").val(tagName); $("#removeTagForm").submit(); }, function () { }, "Yes", "No"); }); $("#addTagLink").click(function () { $(this).hide(); $("#addTagLabel").show(); return false; }); $("#addTagSelect").change(function () { var tagName = $(this).val(); if (tagName === "") { $("#addTagLabel").hide(); $("#addTagLink").show(); } else { $("#addTagForm input[name=tagName]").val(tagName); $("#addTagForm").submit(); } });</script> <style type="text/css">#new-resource-form tr td { padding-top: 0.5em; } #new-resource-form input:not([type="submit"]) { font-size: 0.8em; } #new-resource-form select { font-size: 0.8em; } .new-resource-error { font-size: 0.8em; } .resource-locale { color: #666; font-family: Consolas, "Andale Mono WT", "Andale Mono", "Lucida Console", "Lucida Sans Typewriter", "DejaVu Sans Mono", "Bitstream Vera Sans Mono", "Liberation Mono", "Nimbus Mono L", Monaco, "Courier New", Courier, monospace; }</style>

<div class="roundbox sidebox sidebar-menu borderTopRound " style="">

<div class="caption titled">→ Contest materials</div>

*   <span>[Announcement <span class="resource-locale">(en)</span>](/blog/entry/118431 "Codeforces Round 886 (Div. 4)") </span><span style="float: right;">![](//codeforces.org/s/49634/images/icons/close-10x10.png)</span> 

</div>

</div>

<div id="pageContent" class="content-with-sidebar">

<div class="second-level-menu">

*   [Problems](/problemset)
*   [Submit](/problemset/submit)
*   [Status](/problemset/status)
*   [Standings](/problemset/standings)
*   [Custom test](/problemset/customtest)

</div>

<style>#facebox .content:has(.diff-popup) { width: 90vw; max-width: 120rem !important; } .testCaseMarker { position: absolute; font-weight: bold; font-size: 1rem; } .diff-popup { width: 90vw; max-width: 120rem !important; display: none; overflow: auto; } .input-output-copier { font-size: 1.2rem; float: right; color: #888 !important; cursor: pointer; border: 1px solid rgb(185, 185, 185); padding: 3px; margin: 1px; line-height: 1.1rem; text-transform: none; } .input-output-copier:hover { background-color: #def; } .test-explanation textarea { width: 100%; height: 1.5em; } .pending-submission-message { color: darkorange !important; }</style> <script>const OPENING_SPACE = String.fromCharCode(1001); const CLOSING_SPACE = String.fromCharCode(1002); const nodeToText = function (node, pre) { let result = []; if (node.tagName === "SCRIPT" || node.tagName === "math" || (node.classList && node.classList.contains("input-output-copier"))) return []; if (node.tagName === "NOBR") { result.push(OPENING_SPACE); } if (node.nodeType === Node.TEXT_NODE) { let s = node.textContent; if (!pre) { s = s.replace(/\s+/g, " "); } if (s.length > 0) { result.push(s); } } if (pre && node.tagName === "BR") { result.push("\n"); } node.childNodes.forEach(function (child) { result.push(nodeToText(child, node.tagName === "PRE").join("")); }); if (node.tagName === "DIV" || node.tagName === "P" || node.tagName === "PRE" || node.tagName === "UL" || node.tagName === "LI" ) { result.push("\n"); } if (node.tagName === "NOBR") { result.push(CLOSING_SPACE); } return result; } const isSpecial = function (c) { return c === ',' || c === '.' || c === ';' || c === ')' || c === ' '; } const convertStatementToText = function(statmentNode) { const text = nodeToText(statmentNode, false).join("").replace(/ +/g, " ").replace(/\n\n+/g, "\n\n"); let result = []; for (let i = 0; i < text.length; i++) { const c = text.charAt(i); if (c === OPENING_SPACE) { if (!((i > 0 && text.charAt(i - 1) === '(') || (result.length > 0 && result[result.length - 1] === ' '))) { result.push('+'); } } else if (c === CLOSING_SPACE) { if (!(i + 1 < text.length && isSpecial(text.charAt(i + 1)))) { result.push('-'); } } else { result.push(c); } } return result.join("").split("\n").map(value => value.trim()).join("\n"); };</script>

<div class="problemindexholder" problemindex="H" data-uuid="ps_5aaab802536a92918df89dfc81448c450f2c8bfc">

<div style="display: none; margin:1em 0;text-align: center; position: relative;" class="alert alert-info diff-notifier">

<div>The problem statement has recently been changed. [View the changes.](#)</div>

<span class="diff-notifier-close" style="position: absolute; top: 0.2em; right: 0.3em; cursor: pointer; font-size: 1.4em;">×</span></div>

<div class="ttypography">

<div class="problem-statement">

<div class="header">

<div class="title">H. The Third Letter</div>

<div class="time-limit">

<div class="property-title">time limit per test</div>

2 seconds</div>

<div class="memory-limit">

<div class="property-title">memory limit per test</div>

256 megabytes</div>

<div class="input-file">

<div class="property-title">input</div>

standard input</div>

<div class="output-file">

<div class="property-title">output</div>

standard output</div>

</div>

<div>

In order to win his toughest battle, Mircea came up with a great strategy for his army. He has $n$ soldiers and decided to arrange them in a certain way in camps. Each soldier has to belong to exactly one camp, and there is one camp at each integer point on the $x$-axis (at points $\cdots, -2, -1, 0, 1, 2, \cdots$).

The strategy consists of $m$ conditions. Condition $i$ tells that soldier $a_i$ should belong to a camp that is situated $d_i$ meters in front of the camp that person $b_i$ belongs to. (If $d_i < 0$, then $a_i$/div>s camp should be $-d_i$ meters behind $b_i$/div>s camp.)

Now, Mircea wonders if there exists a partition of soldiers that respects the condition and he asks for your help! Answer "<span class="tex-font-style-tt">YES</span>" if there is a partition of the $n$ soldiers that satisfies <span class="tex-font-style-bf">all</span> of the $m$ conditions and "<span class="tex-font-style-tt">NO</span>" otherwise.

Note that two different soldiers <span class="tex-font-style-bf">may</span> be placed in the same camp.

</div>

<div class="input-specification">

<div class="section-title">Input</div>

The first line contains a single integer $t$ ($1 \leq t \leq 100$) — the number of test cases.

The first line of each test case contains two positive integers $n$ and $m$ ($2 \leq n \leq 2 \cdot 10^5$; $1 \leq m \leq n$) — the number of soldiers, and the number of conditions respectively.

Then $m$ lines follow, each of them containing $3$ integers: $a_i$, $b_i$, $d_i$ ($a_i \neq b_i$; $1 \leq a_i, b_i \leq n$; $-10^9 \leq d_i \leq 10^9$) — denoting the conditions explained in the statement. Note that if $d_i$ is positive, $a_i$ should be $d_i$ meters in front of $b_i$ and if it is negative, $a_i$ should be $-d_i$ meters behind $b_i$.

Note that the sum of $n$ over all test cases doesn't exceed $2 \cdot 10^5$.

</div>

<div class="output-specification">

<div class="section-title">Output</div>

For each test case, output "<span class="tex-font-style-tt">YES</span>" if there is an arrangement of the $n$ soldiers that satisfies <span class="tex-font-style-bf">all</span> of the $m$ conditions and "<span class="tex-font-style-tt">NO</span>" otherwise.

</div>

<div class="sample-tests">

<div class="section-title">Example</div>

<div class="sample-test">

<div class="input">

<div class="title">Input</div>

<pre>

<div class="test-example-line test-example-line-even test-example-line-0">4</div>

<div class="test-example-line test-example-line-odd test-example-line-1">5 3</div>

<div class="test-example-line test-example-line-odd test-example-line-1">1 2 2</div>

<div class="test-example-line test-example-line-odd test-example-line-1">2 3 4</div>

<div class="test-example-line test-example-line-odd test-example-line-1">4 2 -6</div>

<div class="test-example-line test-example-line-even test-example-line-2">6 5</div>

<div class="test-example-line test-example-line-even test-example-line-2">1 2 2</div>

<div class="test-example-line test-example-line-even test-example-line-2">2 3 4</div>

<div class="test-example-line test-example-line-even test-example-line-2">4 2 -6</div>

<div class="test-example-line test-example-line-even test-example-line-2">5 4 4</div>

<div class="test-example-line test-example-line-even test-example-line-2">3 5 100</div>

<div class="test-example-line test-example-line-odd test-example-line-3">2 2</div>

<div class="test-example-line test-example-line-odd test-example-line-3">1 2 5</div>

<div class="test-example-line test-example-line-odd test-example-line-3">1 2 4</div>

<div class="test-example-line test-example-line-even test-example-line-4">4 1</div>

<div class="test-example-line test-example-line-even test-example-line-4">1 2 3</div>

</pre>

</div>

<div class="output">

<div class="title">Output</div>

<pre>YES
NO
NO
YES
</pre>

</div>

</div>

</div>

<div class="note">

<div class="section-title">Note</div>

For the first test case, we can partition the soldiers into camps in the following way: soldier:

*   Soldier $1$ in the camp with the coordinate $x = 3$.
*   Soldier $2$ in the camp with the coordinate $x = 5$.
*   Soldier $3$ in the camp with the coordinate $x = 9$.
*   Soldier $4$ in the camp with the coordinate $x = 11$.

For the second test case, there is no partition that can satisfy all the constraints at the same time.

For the third test case, there is no partition that satisfies all the constraints since we get contradictory information about the same pair.

For the fourth test case, in order to satisfy the only condition, a possible partition is:

*   Soldier $1$ in the camp with the coordinate $x = 10$.
*   Soldier $2$ in the camp with the coordinate $x = 13$.
*   Soldier $3$ in the camp with the coordinate $x = -2023$.
*   Soldier $4$ in the camp with the coordinate $x = -2023$.

</div>

</div>

</div>

</div>

<script>$(function () { Codeforces.addMathJaxListener(function () { let $problem = $("div[problemindex=H]"); let uuid = $problem.attr("data-uuid"); let statementText = convertStatementToText($problem.find(".ttypography").get(0)); let previousStatementText = Codeforces.getFromStorage(uuid); if (previousStatementText) { if (previousStatementText !== statementText) { $problem.find(".diff-notifier").show(); $problem.find(".diff-notifier-close").click(function() { Codeforces.putToStorageTtl(uuid, statementText, 6 * 60 * 60); $problem.find(".diff-notifier").hide(); }); $problem.find("a.view-changes").click(function() { $.post("/data/diff", {action: "getDiff", a: previousStatementText, b: statementText}, function (result) { if (result["success"] === "true") { Codeforces.facebox(".diff-popup", "//codeforces.org/s/49634"); $("#facebox .diff-popup").html(result["diff"]); } }, "json"); }); } } else { Codeforces.putToStorageTtl(uuid, statementText, 6 * 60 * 60); } }); });</script> <script type="text/javascript">$(document).ready(function () { window.changedTests = new Set(); function endsWith(string, suffix) { return string.indexOf(suffix, string.length - suffix.length) !== -1; } const inputFileDiv = $("div.input-file"); const inputFile = inputFileDiv.text(); const outputFileDiv = $("div.output-file"); const outputFile = outputFileDiv.text(); if (!endsWith(inputFile, "standard input") && !endsWith(inputFile, "standard input")) { inputFileDiv.attr("style", "font-weight: bold"); } if (!endsWith(outputFile, "standard output") && !endsWith(outputFile, "standard output")) { outputFileDiv.attr("style", "font-weight: bold"); } const titleDiv = $("div.header div.title"); String.prototype.replaceAll = function (search, replace) { return this.split(search).join(replace); }; $(".sample-test .title").each(function () { const preId = ("id" + Math.random()).replaceAll(".", "0"); const cpyId = ("id" + Math.random()).replaceAll(".", "0"); $(this).parent().find("pre").attr("id", preId); const $copy = $("<div title='Copy' data-clipboard-target='#" + preId + "' id='" + cpyId + "' class='input-output-copier'>Copy</div>"); $(this).append($copy); const clipboard = new Clipboard('#' + cpyId, { text: function (trigger) { const pre = document.querySelector('#' + preId); const lines = pre.querySelectorAll(".test-example-line"); return Codeforces.filterClipboardText(pre.innerText, lines.length); } }); const isInput = $(this).parent().hasClass("input"); clipboard.on('success', function (e) { if (isInput) { Codeforces.showMessage("The example input has been copied into the clipboard"); } else { Codeforces.showMessage("The example output has been copied into the clipboard"); } e.clearSelection(); }); }); $(".test-form-item input").change(function () { addPendingSubmissionMessage($($(this).closest("form")), "You changed the answer, do not forget to submit it if you want to save the changes"); const index = $(this).closest(".problemindexholder").attr("problemindex"); let test = ""; $(this).closest("form input").each(function () { const test_ = $(this).attr("name"); if (test_ && test_.substring(0, 4) === "test") { test = test_; } }); if (index.length > 0 && test.length > 0) { const indexTest = index + "::" + test; window.changedTests.add(indexTest); } }); $(window).on('beforeunload', function () { if (window.changedTests.size > 0) { return 'Dialog text here'; } }); autosize($('.test-explanation textarea')); $(".test-example-line").hover(function() { $(this).attr("class").split(" ").forEach((clazz) => { if (clazz.substr(0, "test-example-line-".length) === "test-example-line-") { let end = clazz.substr("test-example-line-".length); if (end !== "even" && end !== "odd" && end !== "0") { let top = 1E20; let left = 1E20; let problem = $(this).closest(".problemindexholder"); $(this).closest(".input").find("." + clazz).css("background-color", "#FFFDE7").each(function() { top = Math.min(top, $(this).offset().top); left = Math.min(left, $(this).offset().left); }); let testCaseMarker = problem.find(".testCaseMarker_" + end); if (testCaseMarker.length === 0) { const html = "<div class=\"testCaseMarker testCaseMarker_" + end + " notice\"></div>"; problem.append($(html)); testCaseMarker = problem.find(".testCaseMarker_" + end); } if (testCaseMarker) { testCaseMarker.show() .offset({top, left: left - 20}) .text(end); } } } }); }, function() { $(this).attr("class").split(" ").forEach((clazz) => { if (clazz.substr(0, "test-example-line-".length) === "test-example-line-") { let end = clazz.substr("test-example-line-".length); if (end !== "even" && end !== "odd" && end !== "0") { $("." + clazz).css("background-color", ""); $(this).closest(".problemindexholder").find(".testCaseMarker_" + end).hide(); } } }); }); });</script></div>

</div>

<div id="footer">

<div>[Codeforces](https://codeforces.com/) (c) Copyright 2010-2023 Mike Mirzayanov</div>

<div>The only programming contests Web 2.0 platform</div>

<div>Server time: <span class="format-timewithseconds" data-locale="en">Jul/22/2023 11:46:20</span> (i1).</div>

<div>Desktop version, switch to [mobile version](?mobile=true).</div>

<div class="smaller">[Privacy Policy](/privacy)</div>

<div style="margin-top: 25px;">Supported by</div>

<div style="margin-top: 8px; padding-bottom: 20px; position: relative; left: 10px;">[![TON](//codeforces.org/s/36481/images/ton-100x100.png "TON")](https://ton.org/) [![ИТМО](//codeforces.org/s/36481/images/itmo_small_en-logo.png "ИТМО")](http://ifmo.ru/en/)</div>

</div>

<script type="text/javascript">$(function() { $(".switchToMobile").click(function() { Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", "true")); return false; }); $(".switchToDesktop").click(function() { Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", "false")); return false; }); });</script> <script type="text/javascript">$(document).ready(function () { if ($(window).width() < 1600) { $('.button-up').css('width', '30px').css('line-height', '30px').css('font-size', '20px'); } if ($(window).width() >= 1200) { $ (window).scroll (function () { if ($ (this).scrollTop () > 100) { $ ('.button-up').fadeIn(); } else { $ ('.button-up').fadeOut(); } }); $('.button-up').click(function () { $('body,html').animate({ scrollTop: 0 }, 500); return false; }); $('.button-up').hover(function () { $(this).animate({ 'opacity':'1' }).css({'background-color':'#e7ebf0','color':'#6a86a4'}); }, function () { $(this).animate({ 'opacity':'0.7' }).css({'background':'none','color':'#d3dbe4'});; }); } Codeforces.focusOnError(); });</script>

<div class="userListsFacebox" style="display:none;">

<div style="padding: 0.5em; width: 600px; max-height: 200px; overflow-y: auto">

<div class="datatable" style="background-color: #E1E1E1; padding-bottom: 3px;">

<div style="padding: 4px 0 0 6px;font-size:1.4rem;position:relative;">User lists

<div style="position:absolute;right:0.25em;top:0.35em;"><span style="padding:0;position:relative;bottom:2px;" class="rowCount"></span>![](//codeforces.org/s/36481/images/icons/control.png) <span class="filter" style="display:none;">![](//codeforces.org/s/36481/images/icons/control-270.png) <input style="padding:0 0 0 20px;position:relative;bottom:2px;border:1px solid #aaa;height:17px;font-size:1.3rem;"></span> </div>

</div>

<div style="background-color: white;margin:0.3em 3px 0 3px;position:relative;">

<table class="">

<thead>

<tr>

<th>Name</th>

</tr>

</thead>

</table>

</div>

</div>

<script type="text/javascript">$(document).ready(function () { // Create new ':containsIgnoreCase' selector for search jQuery.expr[':'].containsIgnoreCase = function(a, i, m) { return jQuery(a).text().toUpperCase() .indexOf(m[3].toUpperCase()) >= 0; }; if (window.updateDatatableFilter == undefined) { window.updateDatatableFilter = function(i) { var parent = $(i).parent().parent().parent().parent(); $("tr.no-items", parent).remove(); $("tr", parent).hide().removeClass('visible'); var text = $(i).val(); if (text) { $("tr" + ":containsIgnoreCase('" + text + "')", parent).show().addClass('visible'); } else { parent.find(".rowCount").text(""); $("tr", parent).show().addClass('visible'); } var found = false; var visibleRowCount = 0; $("tr", parent).each(function () { if (!found) { if ($(this).find("th").size() > 0) { $(this).show().addClass('visible'); found = true; } } if ($(this).hasClass('visible')) { visibleRowCount++; } }); if (text) { parent.find(".rowCount").text("Matches: " + (visibleRowCount - (found ? 1 : 0))); } if (visibleRowCount == (found ? 1 : 0)) { $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo($(parent).find('table')); } $(parent).find("tr td").removeClass("dark"); $(parent).find("tr.visible:odd td").addClass("dark"); } $(".datatable .closed").click(function () { var parent = $(this).parent(); $(this).hide(); $(".filter", parent).fadeIn(function () { $("input", parent).val("").focus().css("border", "1px solid #aaa"); }); }); $(".datatable .opened").click(function () { var parent = $(this).parent().parent(); $(".filter", parent).fadeOut(function () { $(".closed", parent).show(); $("input", parent).val("").each(function () { window.updateDatatableFilter(this); }); }); }); $(".datatable .filter input").keyup(function(e) { window.updateDatatableFilter(this); e.preventDefault(); e.stopPropagation(); }); $(".datatable table").each(function () { var found = false; $("tr", this).each(function () { if (!found && $(this).find("th").size() == 0) { found = true; } }); if (!found) { $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo(this); } }); // Applies styles to datatables. $(".datatable").each(function () { $(this).find("tr:first th").addClass("top"); $(this).find("tr:last td").addClass("bottom"); $(this).find("tr:odd td").addClass("dark"); $(this).find("tr td:first-child, tr th:first-child").addClass("left"); $(this).find("tr td:last-child, tr th:last-child").addClass("right"); }); $(".datatable table.tablesorter").each(function () { $(this).bind("sortEnd", function () { $(".datatable").each(function () { $(this).find("th, td") .removeClass("top").removeClass("bottom") .removeClass("left").removeClass("right") .removeClass("dark"); $(this).find("tr:first th").addClass("top"); $(this).find("tr:last td").addClass("bottom"); $(this).find("tr:odd td").addClass("dark"); $(this).find("tr td:first-child, tr th:first-child").addClass("left"); $(this).find("tr td:last-child, tr th:last-child").addClass("right"); }); }); }); } });</script></div>

</div>

<script type="application/javascript">$(function() { $(".userListMarker").click(function() { $.post("/data/lists", {action: "findTouched"}, function(json) { Codeforces.facebox(".userListsFacebox"); var tbody = $("#facebox tbody"); tbody.empty(); for (var i in json) { tbody.append( $("<tr></tr>").append( $("<td></td>").attr("data-readKey", json[i].readKey).text(json[i].name) ) ); } Codeforces.updateDatatables(); tbody.find("td").css("cursor", "pointer").click(function() { document.location = Codeforces.updateUrlParameter(document.location.href, "list", $(this).attr("data-readKey")); }); }, "json"); }); });</script></div>

<script type="application/javascript">if ('serviceWorker' in navigator && 'fetch' in window && 'caches' in window) { navigator.serviceWorker.register('/service-worker-49634.js') .then(function (registration) { console.log('Service worker registered: ', registration); }) .catch(function (error) { console.log('Registration failed: ', error); }); }</script>