


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>cppzmq/zmq.hpp at master · zeromq/cppzmq · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="https://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <meta property="og:image" content="https://github.global.ssl.fastly.net/images/modules/logos_page/Octocat.png">
    <meta name="hostname" content="github-fe129-cp1-prd.iad.github.net">
    <meta name="ruby" content="ruby 1.9.3p194-tcs-github-tcmalloc (0e75de19f8) [x86_64-linux]">
    <link rel="assets" href="https://github.global.ssl.fastly.net/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035/">
    <link rel="xhr-socket" href="/_sockets" />
    


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="88AC5051:78F3:17F80BDF:526B4E8A" name="octolytics-dimension-request_id" />
    

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="yYFXQMVlVlpbEhcdnsz9JSnNWJNpv8nl971dJydNhn0=" name="csrf-token" />

    <link href="https://github.global.ssl.fastly.net/assets/github-dfcee7b927f1abff62f05bf200dc06f74af4151e.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://github.global.ssl.fastly.net/assets/github2-f2c706d8f7f5150d85930657a814320eea559d92.css" media="all" rel="stylesheet" type="text/css" />
    

    

      <script src="https://github.global.ssl.fastly.net/assets/frameworks-848ce373d40d7414cbdab0864456e297f22ecf29.js" type="text/javascript"></script>
      <script src="https://github.global.ssl.fastly.net/assets/github-4cec4c32b75cd2e2411d80b74bc0d065371d34bb.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="b558cfcb387cb74833308fe2d7bb30af">

        <link data-pjax-transient rel='permalink' href='/zeromq/cppzmq/blob/235803740753312576495301ebf5b8ed76407173/zmq.hpp'>
  <meta property="og:title" content="cppzmq"/>
  <meta property="og:type" content="githubog:gitrepository"/>
  <meta property="og:url" content="https://github.com/zeromq/cppzmq"/>
  <meta property="og:image" content="https://github.global.ssl.fastly.net/images/gravatars/gravatar-user-420.png"/>
  <meta property="og:site_name" content="GitHub"/>
  <meta property="og:description" content="cppzmq - C++ binding for 0MQ"/>

  <meta name="description" content="cppzmq - C++ binding for 0MQ" />

  <meta content="109777" name="octolytics-dimension-user_id" /><meta content="zeromq" name="octolytics-dimension-user_login" /><meta content="1799895" name="octolytics-dimension-repository_id" /><meta content="zeromq/cppzmq" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="1799895" name="octolytics-dimension-repository_network_root_id" /><meta content="zeromq/cppzmq" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/zeromq/cppzmq/commits/master.atom" rel="alternate" title="Recent Commits to cppzmq:master" type="application/atom+xml" />

  </head>


  <body class="logged_out  env-production  vis-public  page-blob">
    <div class="wrapper">
      
      
      


      
      <div class="header header-logged-out">
  <div class="container clearfix">

    <a class="header-logo-wordmark" href="https://github.com/">
      <span class="mega-octicon octicon-logo-github"></span>
    </a>

    <div class="header-actions">
        <a class="button primary" href="/join">Sign up</a>
      <a class="button signin" href="/login?return_to=%2Fzeromq%2Fcppzmq%2Fblob%2Fmaster%2Fzmq.hpp">Sign in</a>
    </div>

    <div class="command-bar js-command-bar  in-repository">

      <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
        <li class="features"><a href="/features">Features</a></li>
          <li class="enterprise"><a href="https://enterprise.github.com/">Enterprise</a></li>
          <li class="blog"><a href="/blog">Blog</a></li>
      </ul>
        <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    
      data-repo="zeromq/cppzmq"
      data-branch="master"
      data-sha="da3de39d7237c7c13c8c66fde23c187c7825b516"
  >

    <input type="hidden" name="nwo" value="zeromq/cppzmq" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="octicon help tooltipped downwards" title="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
    </div>

  </div>
</div>


      


          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">


  <li>
  <a href="/login?return_to=%2Fzeromq%2Fcppzmq"
  class="minibutton with-count js-toggler-target star-button entice tooltipped upwards"
  title="You must be signed in to use this feature" rel="nofollow">
  <span class="octicon octicon-star"></span>Star
</a>
<a class="social-count js-social-count" href="/zeromq/cppzmq/stargazers">
  83
</a>

  </li>

    <li>
      <a href="/login?return_to=%2Fzeromq%2Fcppzmq"
        class="minibutton with-count js-toggler-target fork-button entice tooltipped upwards"
        title="You must be signed in to fork a repository" rel="nofollow">
        <span class="octicon octicon-git-branch"></span>Fork
      </a>
      <a href="/zeromq/cppzmq/network" class="social-count">
        80
      </a>
    </li>
</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo"></span>
          <span class="author">
            <a href="/zeromq" class="url fn" itemprop="url" rel="author"><span itemprop="title">zeromq</span></a>
          </span>
          <span class="repohead-name-divider">/</span>
          <strong><a href="/zeromq/cppzmq" class="js-current-repository js-repo-home-link">cppzmq</a></strong>

          <span class="page-context-loader">
            <img alt="Octocat-spinner-32" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">

      <div class="repository-with-sidebar repo-container ">

        <div class="repository-sidebar">
            

<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped leftwards" title="Code">
        <a href="/zeromq/cppzmq" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-gotokey="c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /zeromq/cppzmq">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

        <li class="tooltipped leftwards" title="Issues">
          <a href="/zeromq/cppzmq/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-gotokey="i" data-selected-links="repo_issues /zeromq/cppzmq/issues">
            <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
            <span class='counter'>1</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>

      <li class="tooltipped leftwards" title="Pull Requests"><a href="/zeromq/cppzmq/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-gotokey="p" data-selected-links="repo_pulls /zeromq/cppzmq/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>1</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped leftwards" title="Pulse">
        <a href="/zeromq/cppzmq/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /zeromq/cppzmq/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped leftwards" title="Graphs">
        <a href="/zeromq/cppzmq/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /zeromq/cppzmq/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped leftwards" title="Network">
        <a href="/zeromq/cppzmq/network" aria-label="Network" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-selected-links="repo_network /zeromq/cppzmq/network">
          <span class="octicon octicon-git-branch"></span> <span class="full-word">Network</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


  </div>
</div>

            <div class="only-with-full-nav">
              

  

<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/zeromq/cppzmq.git" readonly="readonly">

    <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/zeromq/cppzmq.git" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/zeromq/cppzmq" readonly="readonly">

    <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/zeromq/cppzmq" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>,
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <span class="octicon help tooltipped upwards" title="Get help on which URL is right for you.">
    <a href="https://help.github.com/articles/which-remote-url-should-i-use">
    <span class="octicon octicon-question"></span>
    </a>
  </span>
</p>



              <a href="/zeromq/cppzmq/archive/master.zip"
                 class="minibutton sidebar-button"
                 title="Download this repository as a zip file"
                 rel="nofollow">
                <span class="octicon octicon-cloud-download"></span>
                Download ZIP
              </a>
            </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:c5da142f0454064637f0c47f4e9eebd9 -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<a href="/zeromq/cppzmq/find/master" data-pjax data-hotkey="t" class="js-show-file-finder" style="display:none">Show File Finder</a>

<div class="file-navigation">
  
  

<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    role="button" aria-label="Switch branches or tags" tabindex="0">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax>

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-remove-close js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/zeromq/cppzmq/blob/master/zmq.hpp"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/zeromq/cppzmq" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">cppzmq</span></a></span></span><span class="separator"> / </span><strong class="final-path">zmq.hpp</strong> <span class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="zmq.hpp" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>



  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://2.gravatar.com/avatar/60444475d7e5b9a04aa34631d506241a?d=https%3A%2F%2Fidenticons.github.com%2Fe9b33a370b3bea74ad114dd2ea05e354.png&amp;s=140" width="24" />
    <span class="author"><a href="/jonnydee" rel="author">jonnydee</a></span>
    <time class="js-relative-date" datetime="2013-07-18T14:52:44-07:00" title="2013-07-18 14:52:44">July 18, 2013</time>
    <div class="commit-title">
        <a href="/zeromq/cppzmq/commit/6c17af22b72c860c30adbfa9cd68a701ba9aeb4f" class="message" data-pjax="true" title="monitor_t: Avoid compiler warnings resulting from unused method paramete...

...rs.">monitor_t: Avoid compiler warnings resulting from unused method param…</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>18</strong> contributors</a></p>
          <a class="avatar tooltipped downwards" title="ricnewton" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=ricnewton"><img height="20" src="https://2.gravatar.com/avatar/3df5518f32ab5b73afc461553064952d?d=https%3A%2F%2Fidenticons.github.com%2F547a2f394daa1d3f39049f217daf18c3.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="sustrik" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=sustrik"><img height="20" src="https://2.gravatar.com/avatar/ccbe7da9a44a8737ca2eda4462c42fe1?d=https%3A%2F%2Fidenticons.github.com%2F1a582d186ac50e181d47124169575618.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="hintjens" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=hintjens"><img height="20" src="https://0.gravatar.com/avatar/c1df3a0f97a9daac66cb6f35adb03368?d=https%3A%2F%2Fidenticons.github.com%2Fc12c417333f3ed8ae30c9f559688c2b5.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="montoyaedu" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=montoyaedu"><img height="20" src="https://2.gravatar.com/avatar/c9cb0d6bbc94130a2df27270b142b2d8?d=https%3A%2F%2Fidenticons.github.com%2F9bb42efde4556c62d2940d2617abf373.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="csteifel" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=csteifel"><img height="20" src="https://0.gravatar.com/avatar/053d7640a7c3364e34c4b9a1a7a84406?d=https%3A%2F%2Fidenticons.github.com%2F94d116ca5f6a6f18ca42e069bbbcd456.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="Kobolog" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=Kobolog"><img height="20" src="https://1.gravatar.com/avatar/88e3e7225a676915978506c719a80494?d=https%3A%2F%2Fidenticons.github.com%2F5ea39e9a133f62055f823845b43308dc.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="arsenm" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=arsenm"><img height="20" src="https://1.gravatar.com/avatar/a00e127c9cff27e49bfe935c7c75b54b?d=https%3A%2F%2Fidenticons.github.com%2F0d961331073bf4f16bde23d4f40ca5d7.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="grefab" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=grefab"><img height="20" src="https://1.gravatar.com/avatar/c652bfe4c98476cd9b4fa95aff877198?d=https%3A%2F%2Fidenticons.github.com%2Ff7282756fbb4156370a64768c46ee647.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="jonnydee" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=jonnydee"><img height="20" src="https://2.gravatar.com/avatar/60444475d7e5b9a04aa34631d506241a?d=https%3A%2F%2Fidenticons.github.com%2Fe9b33a370b3bea74ad114dd2ea05e354.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="jdswinbank" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=jdswinbank"><img height="20" src="https://1.gravatar.com/avatar/18475b7110e855a752f8914dadf6729e?d=https%3A%2F%2Fidenticons.github.com%2Fb9ea63b9c739d9bc01b91155d1c5c149.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="taurel" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=taurel"><img height="20" src="https://1.gravatar.com/avatar/8d2fb95c81b8cbf56d08f83893b49b0d?d=https%3A%2F%2Fidenticons.github.com%2F2ba5e8e04292d0add380627e4fa7dad4.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="mrothe" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=mrothe"><img height="20" src="https://identicons.github.com/3e40da343b52920d5ff6d0401001a9a9.png" width="20" /></a>
    <a class="avatar tooltipped downwards" title="robertmaynard" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=robertmaynard"><img height="20" src="https://1.gravatar.com/avatar/81efa37a2331156d6266ca859701021c?d=https%3A%2F%2Fidenticons.github.com%2F2120377d94e249946387e181fb5754d9.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="ianbarber" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=ianbarber"><img height="20" src="https://0.gravatar.com/avatar/47d1af0e885746e39195c8ff3234f47d?d=https%3A%2F%2Fidenticons.github.com%2Ff554388dccbcb9ae9a097f11478c3d86.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="ronelliott" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=ronelliott"><img height="20" src="https://2.gravatar.com/avatar/69dfe7f38901cb0db708165fa81b6dd6?d=https%3A%2F%2Fidenticons.github.com%2F0208febbca1420a6549039746a3c38f9.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="thesamet" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=thesamet"><img height="20" src="https://0.gravatar.com/avatar/5da32259bf04241a6eb53e6f902a0b86?d=https%3A%2F%2Fidenticons.github.com%2F53427caf12997da5c1de59127aae7ff5.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="cjuniet" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=cjuniet"><img height="20" src="https://2.gravatar.com/avatar/197eed5292fd11c0277335c3524ccfd5?d=https%3A%2F%2Fidenticons.github.com%2F4e8275bbfac531185d9ee681c24e3200.png&amp;s=140" width="20" /></a>
    <a class="avatar tooltipped downwards" title="botond-ballo" href="/zeromq/cppzmq/commits/master/zmq.hpp?author=botond-ballo"><img height="20" src="https://2.gravatar.com/avatar/f85c5659dce6f505614c8595a7775eb9?d=https%3A%2F%2Fidenticons.github.com%2Fe3bde23595946ddd1da022c0d0cbf9a9.png&amp;s=140" width="20" /></a>


    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img height="24" src="https://2.gravatar.com/avatar/3df5518f32ab5b73afc461553064952d?d=https%3A%2F%2Fidenticons.github.com%2F547a2f394daa1d3f39049f217daf18c3.png&amp;s=140" width="24" />
            <a href="/ricnewton">ricnewton</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://2.gravatar.com/avatar/ccbe7da9a44a8737ca2eda4462c42fe1?d=https%3A%2F%2Fidenticons.github.com%2F1a582d186ac50e181d47124169575618.png&amp;s=140" width="24" />
            <a href="/sustrik">sustrik</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://0.gravatar.com/avatar/c1df3a0f97a9daac66cb6f35adb03368?d=https%3A%2F%2Fidenticons.github.com%2Fc12c417333f3ed8ae30c9f559688c2b5.png&amp;s=140" width="24" />
            <a href="/hintjens">hintjens</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://2.gravatar.com/avatar/c9cb0d6bbc94130a2df27270b142b2d8?d=https%3A%2F%2Fidenticons.github.com%2F9bb42efde4556c62d2940d2617abf373.png&amp;s=140" width="24" />
            <a href="/montoyaedu">montoyaedu</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://0.gravatar.com/avatar/053d7640a7c3364e34c4b9a1a7a84406?d=https%3A%2F%2Fidenticons.github.com%2F94d116ca5f6a6f18ca42e069bbbcd456.png&amp;s=140" width="24" />
            <a href="/csteifel">csteifel</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://1.gravatar.com/avatar/88e3e7225a676915978506c719a80494?d=https%3A%2F%2Fidenticons.github.com%2F5ea39e9a133f62055f823845b43308dc.png&amp;s=140" width="24" />
            <a href="/Kobolog">Kobolog</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://1.gravatar.com/avatar/a00e127c9cff27e49bfe935c7c75b54b?d=https%3A%2F%2Fidenticons.github.com%2F0d961331073bf4f16bde23d4f40ca5d7.png&amp;s=140" width="24" />
            <a href="/arsenm">arsenm</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://1.gravatar.com/avatar/c652bfe4c98476cd9b4fa95aff877198?d=https%3A%2F%2Fidenticons.github.com%2Ff7282756fbb4156370a64768c46ee647.png&amp;s=140" width="24" />
            <a href="/grefab">grefab</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://2.gravatar.com/avatar/60444475d7e5b9a04aa34631d506241a?d=https%3A%2F%2Fidenticons.github.com%2Fe9b33a370b3bea74ad114dd2ea05e354.png&amp;s=140" width="24" />
            <a href="/jonnydee">jonnydee</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://1.gravatar.com/avatar/18475b7110e855a752f8914dadf6729e?d=https%3A%2F%2Fidenticons.github.com%2Fb9ea63b9c739d9bc01b91155d1c5c149.png&amp;s=140" width="24" />
            <a href="/jdswinbank">jdswinbank</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://1.gravatar.com/avatar/8d2fb95c81b8cbf56d08f83893b49b0d?d=https%3A%2F%2Fidenticons.github.com%2F2ba5e8e04292d0add380627e4fa7dad4.png&amp;s=140" width="24" />
            <a href="/taurel">taurel</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://identicons.github.com/3e40da343b52920d5ff6d0401001a9a9.png" width="24" />
            <a href="/mrothe">mrothe</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://1.gravatar.com/avatar/81efa37a2331156d6266ca859701021c?d=https%3A%2F%2Fidenticons.github.com%2F2120377d94e249946387e181fb5754d9.png&amp;s=140" width="24" />
            <a href="/robertmaynard">robertmaynard</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://0.gravatar.com/avatar/47d1af0e885746e39195c8ff3234f47d?d=https%3A%2F%2Fidenticons.github.com%2Ff554388dccbcb9ae9a097f11478c3d86.png&amp;s=140" width="24" />
            <a href="/ianbarber">ianbarber</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://2.gravatar.com/avatar/69dfe7f38901cb0db708165fa81b6dd6?d=https%3A%2F%2Fidenticons.github.com%2F0208febbca1420a6549039746a3c38f9.png&amp;s=140" width="24" />
            <a href="/ronelliott">ronelliott</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://0.gravatar.com/avatar/5da32259bf04241a6eb53e6f902a0b86?d=https%3A%2F%2Fidenticons.github.com%2F53427caf12997da5c1de59127aae7ff5.png&amp;s=140" width="24" />
            <a href="/thesamet">thesamet</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://2.gravatar.com/avatar/197eed5292fd11c0277335c3524ccfd5?d=https%3A%2F%2Fidenticons.github.com%2F4e8275bbfac531185d9ee681c24e3200.png&amp;s=140" width="24" />
            <a href="/cjuniet">cjuniet</a>
          </li>
          <li class="facebox-user-list-item">
            <img height="24" src="https://2.gravatar.com/avatar/f85c5659dce6f505614c8595a7775eb9?d=https%3A%2F%2Fidenticons.github.com%2Fe3bde23595946ddd1da022c0d0cbf9a9.png&amp;s=140" width="24" />
            <a href="/botond-ballo">botond-ballo</a>
          </li>
      </ul>
    </div>
  </div>

<div id="files" class="bubble">
  <div class="file">
    <div class="meta">
      <div class="info">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
          <span>567 lines (483 sloc)</span>
        <span>16.695 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
              <a class="minibutton disabled js-entice" href=""
                 data-entice="You must be signed in to make or propose changes">Edit</a>
          <a href="/zeromq/cppzmq/raw/master/zmq.hpp" class="button minibutton " id="raw-url">Raw</a>
            <a href="/zeromq/cppzmq/blame/master/zmq.hpp" class="button minibutton ">Blame</a>
          <a href="/zeromq/cppzmq/commits/master/zmq.hpp" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->
          <a class="minibutton danger empty-icon js-entice" href=""
             data-entice="You must be signed in and on a branch to make or propose changes">
          Delete
        </a>
      </div><!-- /.actions -->

    </div>
        <div class="blob-wrapper data type-c js-blob-data">
        <table class="file-code file-diff">
          <tr class="file-code-line">
            <td class="blob-line-nums">
              <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>

            </td>
            <td class="blob-line-code">
                    <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm">    Copyright (c) 2009-2011 250bpm s.r.o.</span></div><div class='line' id='LC3'><span class="cm">    Copyright (c) 2011 Botond Ballo</span></div><div class='line' id='LC4'><span class="cm">    Copyright (c) 2007-2009 iMatix Corporation</span></div><div class='line' id='LC5'><br/></div><div class='line' id='LC6'><span class="cm">    Permission is hereby granted, free of charge, to any person obtaining a copy</span></div><div class='line' id='LC7'><span class="cm">    of this software and associated documentation files (the &quot;Software&quot;), to</span></div><div class='line' id='LC8'><span class="cm">    deal in the Software without restriction, including without limitation the</span></div><div class='line' id='LC9'><span class="cm">    rights to use, copy, modify, merge, publish, distribute, sublicense, and/or</span></div><div class='line' id='LC10'><span class="cm">    sell copies of the Software, and to permit persons to whom the Software is</span></div><div class='line' id='LC11'><span class="cm">    furnished to do so, subject to the following conditions:</span></div><div class='line' id='LC12'><br/></div><div class='line' id='LC13'><span class="cm">    The above copyright notice and this permission notice shall be included in</span></div><div class='line' id='LC14'><span class="cm">    all copies or substantial portions of the Software.</span></div><div class='line' id='LC15'><br/></div><div class='line' id='LC16'><span class="cm">    THE SOFTWARE IS PROVIDED &quot;AS IS&quot;, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR</span></div><div class='line' id='LC17'><span class="cm">    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,</span></div><div class='line' id='LC18'><span class="cm">    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE</span></div><div class='line' id='LC19'><span class="cm">    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER</span></div><div class='line' id='LC20'><span class="cm">    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING</span></div><div class='line' id='LC21'><span class="cm">    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS</span></div><div class='line' id='LC22'><span class="cm">    IN THE SOFTWARE.</span></div><div class='line' id='LC23'><span class="cm">*/</span></div><div class='line' id='LC24'><br/></div><div class='line' id='LC25'><span class="cp">#ifndef __ZMQ_HPP_INCLUDED__</span></div><div class='line' id='LC26'><span class="cp">#define __ZMQ_HPP_INCLUDED__</span></div><div class='line' id='LC27'><br/></div><div class='line' id='LC28'><span class="cp">#include &lt;zmq.h&gt;</span></div><div class='line' id='LC29'><br/></div><div class='line' id='LC30'><span class="cp">#include &lt;algorithm&gt;</span></div><div class='line' id='LC31'><span class="cp">#include &lt;cassert&gt;</span></div><div class='line' id='LC32'><span class="cp">#include &lt;cstring&gt;</span></div><div class='line' id='LC33'><span class="cp">#include &lt;string&gt;</span></div><div class='line' id='LC34'><span class="cp">#include &lt;exception&gt;</span></div><div class='line' id='LC35'><br/></div><div class='line' id='LC36'><span class="c1">//  Detect whether the compiler supports C++11 rvalue references.</span></div><div class='line' id='LC37'><span class="cp">#if (defined(__GNUC__) &amp;&amp; (__GNUC__ &gt; 4 || \</span></div><div class='line' id='LC38'><span class="cp">      (__GNUC__ == 4 &amp;&amp; __GNUC_MINOR__ &gt; 2)) &amp;&amp; \</span></div><div class='line' id='LC39'><span class="cp">      defined(__GXX_EXPERIMENTAL_CXX0X__))</span></div><div class='line' id='LC40'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="n">define</span> <span class="n">ZMQ_HAS_RVALUE_REFS</span></div><div class='line' id='LC41'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="n">define</span> <span class="n">ZMQ_DELETED_FUNCTION</span> <span class="o">=</span> <span class="k">delete</span></div><div class='line' id='LC42'><span class="cp">#elif defined(__clang__)</span></div><div class='line' id='LC43'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="k">if</span> <span class="n">__has_feature</span><span class="p">(</span><span class="n">cxx_rvalue_references</span><span class="p">)</span></div><div class='line' id='LC44'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="n">define</span> <span class="n">ZMQ_HAS_RVALUE_REFS</span></div><div class='line' id='LC45'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="n">endif</span></div><div class='line' id='LC46'><br/></div><div class='line' id='LC47'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="k">if</span> <span class="n">__has_feature</span><span class="p">(</span><span class="n">cxx_deleted_functions</span><span class="p">)</span></div><div class='line' id='LC48'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="n">define</span> <span class="n">ZMQ_DELETED_FUNCTION</span> <span class="o">=</span> <span class="k">delete</span></div><div class='line' id='LC49'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="k">else</span></div><div class='line' id='LC50'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="n">define</span> <span class="n">ZMQ_DELETED_FUNCTION</span></div><div class='line' id='LC51'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="n">endif</span></div><div class='line' id='LC52'><span class="cp">#elif defined(_MSC_VER) &amp;&amp; (_MSC_VER &gt;= 1600)</span></div><div class='line' id='LC53'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="n">define</span> <span class="n">ZMQ_HAS_RVALUE_REFS</span></div><div class='line' id='LC54'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="n">define</span> <span class="n">ZMQ_DELETED_FUNCTION</span></div><div class='line' id='LC55'><span class="cp">#else</span></div><div class='line' id='LC56'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="err">#</span><span class="n">define</span> <span class="n">ZMQ_DELETED_FUNCTION</span></div><div class='line' id='LC57'><span class="cp">#endif</span></div><div class='line' id='LC58'><br/></div><div class='line' id='LC59'><span class="cp">#if ZMQ_VERSION &gt;= ZMQ_MAKE_VERSION(3, 3, 0)</span></div><div class='line' id='LC60'><span class="cp">#define ZMQ_NEW_MONITOR_EVENT_LAYOUT</span></div><div class='line' id='LC61'><span class="cp">#endif</span></div><div class='line' id='LC62'><br/></div><div class='line' id='LC63'><span class="c1">// In order to prevent unused variable warnings when building in non-debug</span></div><div class='line' id='LC64'><span class="c1">// mode use this macro to make assertions.</span></div><div class='line' id='LC65'><span class="cp">#ifndef NDEBUG</span></div><div class='line' id='LC66'><span class="cp">#   define ZMQ_ASSERT(expression) assert(expression)</span></div><div class='line' id='LC67'><span class="cp">#else</span></div><div class='line' id='LC68'><span class="cp">#   define ZMQ_ASSERT(expression) (void)(expression)</span></div><div class='line' id='LC69'><span class="cp">#endif</span></div><div class='line' id='LC70'><br/></div><div class='line' id='LC71'><span class="k">namespace</span> <span class="n">zmq</span></div><div class='line' id='LC72'><span class="p">{</span></div><div class='line' id='LC73'><br/></div><div class='line' id='LC74'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typedef</span> <span class="n">zmq_free_fn</span> <span class="n">free_fn</span><span class="p">;</span></div><div class='line' id='LC75'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">typedef</span> <span class="kt">zmq_pollitem_t</span> <span class="kt">pollitem_t</span><span class="p">;</span></div><div class='line' id='LC76'><br/></div><div class='line' id='LC77'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">class</span> <span class="nc">error_t</span> <span class="o">:</span> <span class="k">public</span> <span class="n">std</span><span class="o">::</span><span class="n">exception</span></div><div class='line' id='LC78'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC79'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">public:</span></div><div class='line' id='LC80'><br/></div><div class='line' id='LC81'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">error_t</span> <span class="p">()</span> <span class="o">:</span> <span class="n">errnum</span> <span class="p">(</span><span class="n">zmq_errno</span> <span class="p">())</span> <span class="p">{}</span></div><div class='line' id='LC82'><br/></div><div class='line' id='LC83'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">what</span> <span class="p">()</span> <span class="k">const</span> <span class="k">throw</span> <span class="p">()</span></div><div class='line' id='LC84'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC85'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">zmq_strerror</span> <span class="p">(</span><span class="n">errnum</span><span class="p">);</span></div><div class='line' id='LC86'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC87'><br/></div><div class='line' id='LC88'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">num</span> <span class="p">()</span> <span class="k">const</span></div><div class='line' id='LC89'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC90'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">errnum</span><span class="p">;</span></div><div class='line' id='LC91'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC92'><br/></div><div class='line' id='LC93'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">private:</span></div><div class='line' id='LC94'><br/></div><div class='line' id='LC95'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">errnum</span><span class="p">;</span></div><div class='line' id='LC96'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC97'><br/></div><div class='line' id='LC98'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">int</span> <span class="nf">poll</span> <span class="p">(</span><span class="kt">zmq_pollitem_t</span> <span class="o">*</span><span class="n">items_</span><span class="p">,</span> <span class="kt">int</span> <span class="n">nitems_</span><span class="p">,</span> <span class="kt">long</span> <span class="n">timeout_</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC99'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC100'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_poll</span> <span class="p">(</span><span class="n">items_</span><span class="p">,</span> <span class="n">nitems_</span><span class="p">,</span> <span class="n">timeout_</span><span class="p">);</span></div><div class='line' id='LC101'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC102'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC103'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC104'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC105'><br/></div><div class='line' id='LC106'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="nf">proxy</span> <span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">frontend</span><span class="p">,</span> <span class="kt">void</span> <span class="o">*</span><span class="n">backend</span><span class="p">,</span> <span class="kt">void</span> <span class="o">*</span><span class="n">capture</span><span class="p">)</span></div><div class='line' id='LC107'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC108'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_proxy</span> <span class="p">(</span><span class="n">frontend</span><span class="p">,</span> <span class="n">backend</span><span class="p">,</span> <span class="n">capture</span><span class="p">);</span></div><div class='line' id='LC109'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC110'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC111'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC112'><br/></div><div class='line' id='LC113'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="nf">version</span> <span class="p">(</span><span class="kt">int</span> <span class="o">*</span><span class="n">major_</span><span class="p">,</span> <span class="kt">int</span> <span class="o">*</span><span class="n">minor_</span><span class="p">,</span> <span class="kt">int</span> <span class="o">*</span><span class="n">patch_</span><span class="p">)</span></div><div class='line' id='LC114'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC115'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">zmq_version</span> <span class="p">(</span><span class="n">major_</span><span class="p">,</span> <span class="n">minor_</span><span class="p">,</span> <span class="n">patch_</span><span class="p">);</span></div><div class='line' id='LC116'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC117'><br/></div><div class='line' id='LC118'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">class</span> <span class="nc">message_t</span></div><div class='line' id='LC119'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC120'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">friend</span> <span class="k">class</span> <span class="nc">socket_t</span><span class="p">;</span></div><div class='line' id='LC121'><br/></div><div class='line' id='LC122'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">public:</span></div><div class='line' id='LC123'><br/></div><div class='line' id='LC124'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="nf">message_t</span> <span class="p">()</span></div><div class='line' id='LC125'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC126'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_init</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">);</span></div><div class='line' id='LC127'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC128'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC129'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC130'><br/></div><div class='line' id='LC131'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="k">explicit</span> <span class="nf">message_t</span> <span class="p">(</span><span class="kt">size_t</span> <span class="n">size_</span><span class="p">)</span></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC133'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_init_size</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">,</span> <span class="n">size_</span><span class="p">);</span></div><div class='line' id='LC134'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC135'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC136'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC137'><br/></div><div class='line' id='LC138'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="nf">message_t</span> <span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">data_</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">size_</span><span class="p">,</span> <span class="n">free_fn</span> <span class="o">*</span><span class="n">ffn_</span><span class="p">,</span></div><div class='line' id='LC139'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="o">*</span><span class="n">hint_</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC140'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC141'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_init_data</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">,</span> <span class="n">data_</span><span class="p">,</span> <span class="n">size_</span><span class="p">,</span> <span class="n">ffn_</span><span class="p">,</span> <span class="n">hint_</span><span class="p">);</span></div><div class='line' id='LC142'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC143'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC144'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC145'><br/></div><div class='line' id='LC146'><span class="cp">#ifdef ZMQ_HAS_RVALUE_REFS</span></div><div class='line' id='LC147'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="nf">message_t</span> <span class="p">(</span><span class="kt">message_t</span> <span class="o">&amp;&amp;</span><span class="n">rhs</span><span class="p">)</span> <span class="o">:</span> <span class="n">msg</span> <span class="p">(</span><span class="n">rhs</span><span class="p">.</span><span class="n">msg</span><span class="p">)</span></div><div class='line' id='LC148'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC149'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_init</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">rhs</span><span class="p">.</span><span class="n">msg</span><span class="p">);</span></div><div class='line' id='LC150'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC151'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC152'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC153'><br/></div><div class='line' id='LC154'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">message_t</span> <span class="o">&amp;</span><span class="k">operator</span> <span class="o">=</span> <span class="p">(</span><span class="kt">message_t</span> <span class="o">&amp;&amp;</span><span class="n">rhs</span><span class="p">)</span></div><div class='line' id='LC155'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC156'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">std</span><span class="o">::</span><span class="n">swap</span> <span class="p">(</span><span class="n">msg</span><span class="p">,</span> <span class="n">rhs</span><span class="p">.</span><span class="n">msg</span><span class="p">);</span></div><div class='line' id='LC157'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="o">*</span><span class="k">this</span><span class="p">;</span></div><div class='line' id='LC158'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC159'><span class="cp">#endif</span></div><div class='line' id='LC160'><br/></div><div class='line' id='LC161'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="o">~</span><span class="kt">message_t</span> <span class="p">()</span></div><div class='line' id='LC162'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC163'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_close</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">);</span></div><div class='line' id='LC164'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ZMQ_ASSERT</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC165'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC166'><br/></div><div class='line' id='LC167'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">rebuild</span> <span class="p">()</span></div><div class='line' id='LC168'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC169'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_close</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">);</span></div><div class='line' id='LC170'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC171'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC172'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_init</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">);</span></div><div class='line' id='LC173'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC174'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC175'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC176'><br/></div><div class='line' id='LC177'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">rebuild</span> <span class="p">(</span><span class="kt">size_t</span> <span class="n">size_</span><span class="p">)</span></div><div class='line' id='LC178'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC179'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_close</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">);</span></div><div class='line' id='LC180'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC182'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_init_size</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">,</span> <span class="n">size_</span><span class="p">);</span></div><div class='line' id='LC183'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC184'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC185'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC186'><br/></div><div class='line' id='LC187'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">rebuild</span> <span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">data_</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">size_</span><span class="p">,</span> <span class="n">free_fn</span> <span class="o">*</span><span class="n">ffn_</span><span class="p">,</span></div><div class='line' id='LC188'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="o">*</span><span class="n">hint_</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC189'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC190'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_close</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">);</span></div><div class='line' id='LC191'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC192'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC193'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_init_data</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">,</span> <span class="n">data_</span><span class="p">,</span> <span class="n">size_</span><span class="p">,</span> <span class="n">ffn_</span><span class="p">,</span> <span class="n">hint_</span><span class="p">);</span></div><div class='line' id='LC194'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC195'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC196'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC197'><br/></div><div class='line' id='LC198'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">move</span> <span class="p">(</span><span class="kt">message_t</span> <span class="o">*</span><span class="n">msg_</span><span class="p">)</span></div><div class='line' id='LC199'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC200'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_move</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">,</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">msg_</span><span class="o">-&gt;</span><span class="n">msg</span><span class="p">));</span></div><div class='line' id='LC201'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC202'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC203'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC204'><br/></div><div class='line' id='LC205'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">copy</span> <span class="p">(</span><span class="kt">message_t</span> <span class="o">*</span><span class="n">msg_</span><span class="p">)</span></div><div class='line' id='LC206'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC207'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_copy</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">,</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">msg_</span><span class="o">-&gt;</span><span class="n">msg</span><span class="p">));</span></div><div class='line' id='LC208'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC209'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC210'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC211'><br/></div><div class='line' id='LC212'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">bool</span> <span class="n">more</span> <span class="p">()</span></div><div class='line' id='LC213'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC214'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_msg_more</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">);</span></div><div class='line' id='LC215'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC216'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC217'><br/></div><div class='line' id='LC218'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="o">*</span><span class="n">data</span> <span class="p">()</span></div><div class='line' id='LC219'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC220'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">zmq_msg_data</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">);</span></div><div class='line' id='LC221'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC222'><br/></div><div class='line' id='LC223'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="k">const</span> <span class="kt">void</span><span class="o">*</span> <span class="n">data</span> <span class="p">()</span> <span class="k">const</span></div><div class='line' id='LC224'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC225'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">zmq_msg_data</span> <span class="p">(</span><span class="k">const_cast</span><span class="o">&lt;</span><span class="kt">zmq_msg_t</span><span class="o">*&gt;</span><span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">));</span></div><div class='line' id='LC226'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC227'><br/></div><div class='line' id='LC228'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">size_t</span> <span class="n">size</span> <span class="p">()</span> <span class="k">const</span></div><div class='line' id='LC229'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC230'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">zmq_msg_size</span> <span class="p">(</span><span class="k">const_cast</span><span class="o">&lt;</span><span class="kt">zmq_msg_t</span><span class="o">*&gt;</span><span class="p">(</span><span class="o">&amp;</span><span class="n">msg</span><span class="p">));</span></div><div class='line' id='LC231'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC232'><br/></div><div class='line' id='LC233'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">private:</span></div><div class='line' id='LC234'><br/></div><div class='line' id='LC235'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  The underlying message</span></div><div class='line' id='LC236'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">zmq_msg_t</span> <span class="n">msg</span><span class="p">;</span></div><div class='line' id='LC237'><br/></div><div class='line' id='LC238'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  Disable implicit message copying, so that users won&#39;t use shared</span></div><div class='line' id='LC239'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  messages (less efficient) without being aware of the fact.</span></div><div class='line' id='LC240'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">message_t</span> <span class="p">(</span><span class="k">const</span> <span class="kt">message_t</span><span class="o">&amp;</span><span class="p">);</span></div><div class='line' id='LC241'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="k">operator</span> <span class="o">=</span> <span class="p">(</span><span class="k">const</span> <span class="kt">message_t</span><span class="o">&amp;</span><span class="p">);</span></div><div class='line' id='LC242'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC243'><br/></div><div class='line' id='LC244'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">class</span> <span class="nc">context_t</span></div><div class='line' id='LC245'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC246'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">friend</span> <span class="k">class</span> <span class="nc">socket_t</span><span class="p">;</span></div><div class='line' id='LC247'><br/></div><div class='line' id='LC248'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">public:</span></div><div class='line' id='LC249'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="nf">context_t</span> <span class="p">()</span></div><div class='line' id='LC250'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC251'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ptr</span> <span class="o">=</span> <span class="n">zmq_ctx_new</span> <span class="p">();</span></div><div class='line' id='LC252'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ptr</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC253'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC254'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC255'><br/></div><div class='line' id='LC256'><br/></div><div class='line' id='LC257'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="k">explicit</span> <span class="nf">context_t</span> <span class="p">(</span><span class="kt">int</span> <span class="n">io_threads_</span><span class="p">)</span></div><div class='line' id='LC258'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC259'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ptr</span> <span class="o">=</span> <span class="n">zmq_ctx_new</span> <span class="p">();</span></div><div class='line' id='LC260'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ptr</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC261'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC262'><br/></div><div class='line' id='LC263'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_ctx_set</span> <span class="p">(</span><span class="n">ptr</span><span class="p">,</span> <span class="n">ZMQ_IO_THREADS</span><span class="p">,</span> <span class="n">io_threads_</span><span class="p">);</span></div><div class='line' id='LC264'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ZMQ_ASSERT</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC265'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC266'><br/></div><div class='line' id='LC267'><span class="cp">#ifdef ZMQ_HAS_RVALUE_REFS</span></div><div class='line' id='LC268'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="nf">context_t</span> <span class="p">(</span><span class="kt">context_t</span> <span class="o">&amp;&amp;</span><span class="n">rhs</span><span class="p">)</span> <span class="o">:</span> <span class="n">ptr</span> <span class="p">(</span><span class="n">rhs</span><span class="p">.</span><span class="n">ptr</span><span class="p">)</span></div><div class='line' id='LC269'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC270'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rhs</span><span class="p">.</span><span class="n">ptr</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC271'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC272'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">context_t</span> <span class="o">&amp;</span><span class="k">operator</span> <span class="o">=</span> <span class="p">(</span><span class="kt">context_t</span> <span class="o">&amp;&amp;</span><span class="n">rhs</span><span class="p">)</span></div><div class='line' id='LC273'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC274'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">std</span><span class="o">::</span><span class="n">swap</span> <span class="p">(</span><span class="n">ptr</span><span class="p">,</span> <span class="n">rhs</span><span class="p">.</span><span class="n">ptr</span><span class="p">);</span></div><div class='line' id='LC275'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="o">*</span><span class="k">this</span><span class="p">;</span></div><div class='line' id='LC276'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC277'><span class="cp">#endif</span></div><div class='line' id='LC278'><br/></div><div class='line' id='LC279'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="o">~</span><span class="kt">context_t</span> <span class="p">()</span></div><div class='line' id='LC280'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC281'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">close</span><span class="p">();</span></div><div class='line' id='LC282'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC283'><br/></div><div class='line' id='LC284'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">close</span><span class="p">()</span></div><div class='line' id='LC285'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC286'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ptr</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC287'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC288'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_ctx_destroy</span> <span class="p">(</span><span class="n">ptr</span><span class="p">);</span></div><div class='line' id='LC289'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ZMQ_ASSERT</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC290'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ptr</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC291'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC292'><br/></div><div class='line' id='LC293'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  Be careful with this, it&#39;s probably only useful for</span></div><div class='line' id='LC294'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  using the C api together with an existing C++ api.</span></div><div class='line' id='LC295'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  Normally you should never need to use this.</span></div><div class='line' id='LC296'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="k">operator</span> <span class="kt">void</span><span class="o">*</span> <span class="p">()</span></div><div class='line' id='LC297'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC298'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">ptr</span><span class="p">;</span></div><div class='line' id='LC299'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC300'><br/></div><div class='line' id='LC301'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">private:</span></div><div class='line' id='LC302'><br/></div><div class='line' id='LC303'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="o">*</span><span class="n">ptr</span><span class="p">;</span></div><div class='line' id='LC304'><br/></div><div class='line' id='LC305'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">context_t</span> <span class="p">(</span><span class="k">const</span> <span class="kt">context_t</span><span class="o">&amp;</span><span class="p">);</span></div><div class='line' id='LC306'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="k">operator</span> <span class="o">=</span> <span class="p">(</span><span class="k">const</span> <span class="kt">context_t</span><span class="o">&amp;</span><span class="p">);</span></div><div class='line' id='LC307'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC308'><br/></div><div class='line' id='LC309'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">class</span> <span class="nc">socket_t</span></div><div class='line' id='LC310'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC311'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">friend</span> <span class="k">class</span> <span class="nc">monitor_t</span><span class="p">;</span></div><div class='line' id='LC312'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">public:</span></div><div class='line' id='LC313'><br/></div><div class='line' id='LC314'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="nf">socket_t</span> <span class="p">(</span><span class="kt">context_t</span> <span class="o">&amp;</span><span class="n">context_</span><span class="p">,</span> <span class="kt">int</span> <span class="n">type_</span><span class="p">)</span></div><div class='line' id='LC315'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC316'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ctxptr</span> <span class="o">=</span> <span class="n">context_</span><span class="p">.</span><span class="n">ptr</span><span class="p">;</span></div><div class='line' id='LC317'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ptr</span> <span class="o">=</span> <span class="n">zmq_socket</span> <span class="p">(</span><span class="n">context_</span><span class="p">.</span><span class="n">ptr</span><span class="p">,</span> <span class="n">type_</span><span class="p">);</span></div><div class='line' id='LC318'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">ptr</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC319'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC320'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC321'><br/></div><div class='line' id='LC322'><span class="cp">#ifdef ZMQ_HAS_RVALUE_REFS</span></div><div class='line' id='LC323'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="nf">socket_t</span><span class="p">(</span><span class="kt">socket_t</span><span class="o">&amp;&amp;</span> <span class="n">rhs</span><span class="p">)</span> <span class="o">:</span> <span class="n">ptr</span><span class="p">(</span><span class="n">rhs</span><span class="p">.</span><span class="n">ptr</span><span class="p">)</span></div><div class='line' id='LC324'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC325'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rhs</span><span class="p">.</span><span class="n">ptr</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC326'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC327'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">socket_t</span><span class="o">&amp;</span> <span class="k">operator</span><span class="o">=</span><span class="p">(</span><span class="kt">socket_t</span><span class="o">&amp;&amp;</span> <span class="n">rhs</span><span class="p">)</span></div><div class='line' id='LC328'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC329'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">std</span><span class="o">::</span><span class="n">swap</span><span class="p">(</span><span class="n">ptr</span><span class="p">,</span> <span class="n">rhs</span><span class="p">.</span><span class="n">ptr</span><span class="p">);</span></div><div class='line' id='LC330'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="o">*</span><span class="k">this</span><span class="p">;</span></div><div class='line' id='LC331'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC332'><span class="cp">#endif</span></div><div class='line' id='LC333'><br/></div><div class='line' id='LC334'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="o">~</span><span class="kt">socket_t</span> <span class="p">()</span></div><div class='line' id='LC335'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC336'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">close</span><span class="p">();</span></div><div class='line' id='LC337'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC338'><br/></div><div class='line' id='LC339'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="k">operator</span> <span class="kt">void</span><span class="o">*</span> <span class="p">()</span></div><div class='line' id='LC340'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC341'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">ptr</span><span class="p">;</span></div><div class='line' id='LC342'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC343'><br/></div><div class='line' id='LC344'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">close</span><span class="p">()</span></div><div class='line' id='LC345'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC346'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">ptr</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC347'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// already closed</span></div><div class='line' id='LC348'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="p">;</span></div><div class='line' id='LC349'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_close</span> <span class="p">(</span><span class="n">ptr</span><span class="p">);</span></div><div class='line' id='LC350'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ZMQ_ASSERT</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC351'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ptr</span> <span class="o">=</span> <span class="mi">0</span> <span class="p">;</span></div><div class='line' id='LC352'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC353'><br/></div><div class='line' id='LC354'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">setsockopt</span> <span class="p">(</span><span class="kt">int</span> <span class="n">option_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">void</span> <span class="o">*</span><span class="n">optval_</span><span class="p">,</span></div><div class='line' id='LC355'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">size_t</span> <span class="n">optvallen_</span><span class="p">)</span></div><div class='line' id='LC356'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC357'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_setsockopt</span> <span class="p">(</span><span class="n">ptr</span><span class="p">,</span> <span class="n">option_</span><span class="p">,</span> <span class="n">optval_</span><span class="p">,</span> <span class="n">optvallen_</span><span class="p">);</span></div><div class='line' id='LC358'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC359'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC360'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC361'><br/></div><div class='line' id='LC362'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">getsockopt</span> <span class="p">(</span><span class="kt">int</span> <span class="n">option_</span><span class="p">,</span> <span class="kt">void</span> <span class="o">*</span><span class="n">optval_</span><span class="p">,</span></div><div class='line' id='LC363'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">size_t</span> <span class="o">*</span><span class="n">optvallen_</span><span class="p">)</span></div><div class='line' id='LC364'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC365'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_getsockopt</span> <span class="p">(</span><span class="n">ptr</span><span class="p">,</span> <span class="n">option_</span><span class="p">,</span> <span class="n">optval_</span><span class="p">,</span> <span class="n">optvallen_</span><span class="p">);</span></div><div class='line' id='LC366'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC367'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC368'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC369'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC370'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">bind</span> <span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">addr_</span><span class="p">)</span></div><div class='line' id='LC371'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC372'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_bind</span> <span class="p">(</span><span class="n">ptr</span><span class="p">,</span> <span class="n">addr_</span><span class="p">);</span></div><div class='line' id='LC373'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC374'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC375'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC376'><br/></div><div class='line' id='LC377'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">unbind</span> <span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">addr_</span><span class="p">)</span></div><div class='line' id='LC378'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC379'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_unbind</span> <span class="p">(</span><span class="n">ptr</span><span class="p">,</span> <span class="n">addr_</span><span class="p">);</span></div><div class='line' id='LC380'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC381'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC382'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC383'><br/></div><div class='line' id='LC384'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">connect</span> <span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">addr_</span><span class="p">)</span></div><div class='line' id='LC385'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC386'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_connect</span> <span class="p">(</span><span class="n">ptr</span><span class="p">,</span> <span class="n">addr_</span><span class="p">);</span></div><div class='line' id='LC387'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC388'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC389'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC390'><br/></div><div class='line' id='LC391'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">void</span> <span class="n">disconnect</span> <span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">addr_</span><span class="p">)</span></div><div class='line' id='LC392'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC393'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_disconnect</span> <span class="p">(</span><span class="n">ptr</span><span class="p">,</span> <span class="n">addr_</span><span class="p">);</span></div><div class='line' id='LC394'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC395'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC396'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC397'><br/></div><div class='line' id='LC398'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">bool</span> <span class="n">connected</span><span class="p">()</span></div><div class='line' id='LC399'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC400'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">(</span><span class="n">ptr</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">);</span></div><div class='line' id='LC401'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC402'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC403'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">size_t</span> <span class="n">send</span> <span class="p">(</span><span class="k">const</span> <span class="kt">void</span> <span class="o">*</span><span class="n">buf_</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">len_</span><span class="p">,</span> <span class="kt">int</span> <span class="n">flags_</span> <span class="o">=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC404'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC405'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">nbytes</span> <span class="o">=</span> <span class="n">zmq_send</span> <span class="p">(</span><span class="n">ptr</span><span class="p">,</span> <span class="n">buf_</span><span class="p">,</span> <span class="n">len_</span><span class="p">,</span> <span class="n">flags_</span><span class="p">);</span></div><div class='line' id='LC406'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">nbytes</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC407'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="p">(</span><span class="kt">size_t</span><span class="p">)</span> <span class="n">nbytes</span><span class="p">;</span></div><div class='line' id='LC408'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">zmq_errno</span> <span class="p">()</span> <span class="o">==</span> <span class="n">EAGAIN</span><span class="p">)</span></div><div class='line' id='LC409'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC410'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="nf">error_t</span> <span class="p">();</span></div><div class='line' id='LC411'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC412'><br/></div><div class='line' id='LC413'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">bool</span> <span class="n">send</span> <span class="p">(</span><span class="kt">message_t</span> <span class="o">&amp;</span><span class="n">msg_</span><span class="p">,</span> <span class="kt">int</span> <span class="n">flags_</span> <span class="o">=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC414'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC415'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">nbytes</span> <span class="o">=</span> <span class="n">zmq_msg_send</span> <span class="p">(</span><span class="o">&amp;</span><span class="p">(</span><span class="n">msg_</span><span class="p">.</span><span class="n">msg</span><span class="p">),</span> <span class="n">ptr</span><span class="p">,</span> <span class="n">flags_</span><span class="p">);</span></div><div class='line' id='LC416'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">nbytes</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC417'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC418'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">zmq_errno</span> <span class="p">()</span> <span class="o">==</span> <span class="n">EAGAIN</span><span class="p">)</span></div><div class='line' id='LC419'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC420'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="nf">error_t</span> <span class="p">();</span></div><div class='line' id='LC421'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC422'><br/></div><div class='line' id='LC423'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">size_t</span> <span class="n">recv</span> <span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">buf_</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">len_</span><span class="p">,</span> <span class="kt">int</span> <span class="n">flags_</span> <span class="o">=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC424'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC425'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">nbytes</span> <span class="o">=</span> <span class="n">zmq_recv</span> <span class="p">(</span><span class="n">ptr</span><span class="p">,</span> <span class="n">buf_</span><span class="p">,</span> <span class="n">len_</span><span class="p">,</span> <span class="n">flags_</span><span class="p">);</span></div><div class='line' id='LC426'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">nbytes</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC427'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="p">(</span><span class="kt">size_t</span><span class="p">)</span> <span class="n">nbytes</span><span class="p">;</span></div><div class='line' id='LC428'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">zmq_errno</span> <span class="p">()</span> <span class="o">==</span> <span class="n">EAGAIN</span><span class="p">)</span></div><div class='line' id='LC429'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC430'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="nf">error_t</span> <span class="p">();</span></div><div class='line' id='LC431'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC432'><br/></div><div class='line' id='LC433'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="kt">bool</span> <span class="n">recv</span> <span class="p">(</span><span class="kt">message_t</span> <span class="o">*</span><span class="n">msg_</span><span class="p">,</span> <span class="kt">int</span> <span class="n">flags_</span> <span class="o">=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC434'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC435'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">nbytes</span> <span class="o">=</span> <span class="n">zmq_msg_recv</span> <span class="p">(</span><span class="o">&amp;</span><span class="p">(</span><span class="n">msg_</span><span class="o">-&gt;</span><span class="n">msg</span><span class="p">),</span> <span class="n">ptr</span><span class="p">,</span> <span class="n">flags_</span><span class="p">);</span></div><div class='line' id='LC436'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">nbytes</span> <span class="o">&gt;=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC437'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC438'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">zmq_errno</span> <span class="p">()</span> <span class="o">==</span> <span class="n">EAGAIN</span><span class="p">)</span></div><div class='line' id='LC439'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC440'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="nf">error_t</span> <span class="p">();</span></div><div class='line' id='LC441'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC442'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC443'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">private:</span></div><div class='line' id='LC444'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="o">*</span><span class="n">ptr</span><span class="p">;</span></div><div class='line' id='LC445'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="o">*</span><span class="n">ctxptr</span><span class="p">;</span></div><div class='line' id='LC446'><br/></div><div class='line' id='LC447'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">socket_t</span> <span class="p">(</span><span class="k">const</span> <span class="kt">socket_t</span><span class="o">&amp;</span><span class="p">)</span> <span class="n">ZMQ_DELETED_FUNCTION</span><span class="p">;</span></div><div class='line' id='LC448'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="k">operator</span> <span class="o">=</span> <span class="p">(</span><span class="k">const</span> <span class="kt">socket_t</span><span class="o">&amp;</span><span class="p">)</span> <span class="n">ZMQ_DELETED_FUNCTION</span><span class="p">;</span></div><div class='line' id='LC449'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC450'><br/></div><div class='line' id='LC451'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">class</span> <span class="nc">monitor_t</span></div><div class='line' id='LC452'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC453'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">public:</span></div><div class='line' id='LC454'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">monitor_t</span><span class="p">()</span> <span class="o">:</span> <span class="n">socketPtr</span><span class="p">(</span><span class="nb">NULL</span><span class="p">)</span> <span class="p">{}</span></div><div class='line' id='LC455'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="o">~</span><span class="kt">monitor_t</span><span class="p">()</span> <span class="p">{}</span></div><div class='line' id='LC456'><br/></div><div class='line' id='LC457'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">monitor</span><span class="p">(</span><span class="kt">socket_t</span> <span class="o">&amp;</span><span class="n">socket</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">addr_</span><span class="p">,</span> <span class="kt">int</span> <span class="n">events</span> <span class="o">=</span> <span class="n">ZMQ_EVENT_ALL</span><span class="p">)</span></div><div class='line' id='LC458'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC459'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_socket_monitor</span><span class="p">(</span><span class="n">socket</span><span class="p">.</span><span class="n">ptr</span><span class="p">,</span> <span class="n">addr_</span><span class="p">,</span> <span class="n">events</span><span class="p">);</span></div><div class='line' id='LC460'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC461'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">throw</span> <span class="kt">error_t</span> <span class="p">();</span></div><div class='line' id='LC462'><br/></div><div class='line' id='LC463'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">socketPtr</span> <span class="o">=</span> <span class="n">socket</span><span class="p">.</span><span class="n">ptr</span><span class="p">;</span></div><div class='line' id='LC464'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="o">*</span><span class="n">s</span> <span class="o">=</span> <span class="n">zmq_socket</span> <span class="p">(</span><span class="n">socket</span><span class="p">.</span><span class="n">ctxptr</span><span class="p">,</span> <span class="n">ZMQ_PAIR</span><span class="p">);</span></div><div class='line' id='LC465'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span> <span class="p">(</span><span class="n">s</span><span class="p">);</span></div><div class='line' id='LC466'><br/></div><div class='line' id='LC467'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_connect</span> <span class="p">(</span><span class="n">s</span><span class="p">,</span> <span class="n">addr_</span><span class="p">);</span></div><div class='line' id='LC468'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC469'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC470'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_monitor_started</span><span class="p">();</span></div><div class='line' id='LC471'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC472'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">while</span> <span class="p">(</span><span class="nb">true</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC473'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">zmq_msg_t</span> <span class="n">eventMsg</span><span class="p">;</span></div><div class='line' id='LC474'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">zmq_msg_init</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">eventMsg</span><span class="p">);</span></div><div class='line' id='LC475'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_recvmsg</span> <span class="p">(</span><span class="n">s</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">eventMsg</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC476'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="o">-</span><span class="mi">1</span> <span class="o">&amp;&amp;</span> <span class="n">zmq_errno</span><span class="p">()</span> <span class="o">==</span> <span class="n">ETERM</span><span class="p">)</span></div><div class='line' id='LC477'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC478'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC479'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">zmq_event_t</span><span class="o">*</span> <span class="n">event</span> <span class="o">=</span> <span class="k">static_cast</span><span class="o">&lt;</span><span class="kt">zmq_event_t</span><span class="o">*&gt;</span><span class="p">(</span><span class="n">zmq_msg_data</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">eventMsg</span><span class="p">));</span></div><div class='line' id='LC480'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC481'><span class="cp">#ifdef ZMQ_NEW_MONITOR_EVENT_LAYOUT</span></div><div class='line' id='LC482'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">zmq_msg_t</span> <span class="n">addrMsg</span><span class="p">;</span></div><div class='line' id='LC483'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">zmq_msg_init</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">addrMsg</span><span class="p">);</span></div><div class='line' id='LC484'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">rc</span> <span class="o">=</span> <span class="n">zmq_recvmsg</span> <span class="p">(</span><span class="n">s</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">addrMsg</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC485'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">==</span> <span class="o">-</span><span class="mi">1</span> <span class="o">&amp;&amp;</span> <span class="n">zmq_errno</span><span class="p">()</span> <span class="o">==</span> <span class="n">ETERM</span><span class="p">)</span></div><div class='line' id='LC486'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC487'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">assert</span> <span class="p">(</span><span class="n">rc</span> <span class="o">!=</span> <span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC488'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">str</span> <span class="o">=</span> <span class="k">static_cast</span><span class="o">&lt;</span><span class="k">const</span> <span class="kt">char</span><span class="o">*&gt;</span><span class="p">(</span><span class="n">zmq_msg_data</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">addrMsg</span><span class="p">));</span></div><div class='line' id='LC489'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="n">address</span><span class="p">(</span><span class="n">str</span><span class="p">,</span> <span class="n">str</span> <span class="o">+</span> <span class="n">zmq_msg_size</span><span class="p">(</span><span class="o">&amp;</span><span class="n">addrMsg</span><span class="p">));</span></div><div class='line' id='LC490'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">zmq_msg_close</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">addrMsg</span><span class="p">);</span></div><div class='line' id='LC491'><span class="cp">#else</span></div><div class='line' id='LC492'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Bit of a hack, but all events in the zmq_event_t union have the same layout so this will work for all event types.</span></div><div class='line' id='LC493'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="n">address</span> <span class="o">=</span> <span class="n">event</span><span class="o">-&gt;</span><span class="n">data</span><span class="p">.</span><span class="n">connected</span><span class="p">.</span><span class="n">addr</span><span class="p">;</span></div><div class='line' id='LC494'><span class="cp">#endif</span></div><div class='line' id='LC495'><br/></div><div class='line' id='LC496'><span class="cp">#ifdef ZMQ_EVENT_MONITOR_STOPPED</span></div><div class='line' id='LC497'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">event</span><span class="o">-&gt;</span><span class="n">event</span> <span class="o">==</span> <span class="n">ZMQ_EVENT_MONITOR_STOPPED</span><span class="p">)</span></div><div class='line' id='LC498'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC499'><span class="cp">#endif</span></div><div class='line' id='LC500'><br/></div><div class='line' id='LC501'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">switch</span> <span class="p">(</span><span class="n">event</span><span class="o">-&gt;</span><span class="n">event</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC502'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">ZMQ_EVENT_CONNECTED</span>:</div><div class='line' id='LC503'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_event_connected</span><span class="p">(</span><span class="o">*</span><span class="n">event</span><span class="p">,</span> <span class="n">address</span><span class="p">.</span><span class="n">c_str</span><span class="p">());</span></div><div class='line' id='LC504'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC505'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">ZMQ_EVENT_CONNECT_DELAYED</span>:</div><div class='line' id='LC506'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_event_connect_delayed</span><span class="p">(</span><span class="o">*</span><span class="n">event</span><span class="p">,</span> <span class="n">address</span><span class="p">.</span><span class="n">c_str</span><span class="p">());</span></div><div class='line' id='LC507'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC508'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">ZMQ_EVENT_CONNECT_RETRIED</span>:</div><div class='line' id='LC509'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_event_connect_retried</span><span class="p">(</span><span class="o">*</span><span class="n">event</span><span class="p">,</span> <span class="n">address</span><span class="p">.</span><span class="n">c_str</span><span class="p">());</span></div><div class='line' id='LC510'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC511'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">ZMQ_EVENT_LISTENING</span>:</div><div class='line' id='LC512'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_event_listening</span><span class="p">(</span><span class="o">*</span><span class="n">event</span><span class="p">,</span> <span class="n">address</span><span class="p">.</span><span class="n">c_str</span><span class="p">());</span></div><div class='line' id='LC513'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC514'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">ZMQ_EVENT_BIND_FAILED</span>:</div><div class='line' id='LC515'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_event_bind_failed</span><span class="p">(</span><span class="o">*</span><span class="n">event</span><span class="p">,</span> <span class="n">address</span><span class="p">.</span><span class="n">c_str</span><span class="p">());</span></div><div class='line' id='LC516'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC517'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">ZMQ_EVENT_ACCEPTED</span>:</div><div class='line' id='LC518'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_event_accepted</span><span class="p">(</span><span class="o">*</span><span class="n">event</span><span class="p">,</span> <span class="n">address</span><span class="p">.</span><span class="n">c_str</span><span class="p">());</span></div><div class='line' id='LC519'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC520'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">ZMQ_EVENT_ACCEPT_FAILED</span>:</div><div class='line' id='LC521'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_event_accept_failed</span><span class="p">(</span><span class="o">*</span><span class="n">event</span><span class="p">,</span> <span class="n">address</span><span class="p">.</span><span class="n">c_str</span><span class="p">());</span></div><div class='line' id='LC522'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC523'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">ZMQ_EVENT_CLOSED</span>:</div><div class='line' id='LC524'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_event_closed</span><span class="p">(</span><span class="o">*</span><span class="n">event</span><span class="p">,</span> <span class="n">address</span><span class="p">.</span><span class="n">c_str</span><span class="p">());</span></div><div class='line' id='LC525'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC526'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">ZMQ_EVENT_CLOSE_FAILED</span>:</div><div class='line' id='LC527'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_event_close_failed</span><span class="p">(</span><span class="o">*</span><span class="n">event</span><span class="p">,</span> <span class="n">address</span><span class="p">.</span><span class="n">c_str</span><span class="p">());</span></div><div class='line' id='LC528'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC529'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">case</span> <span class="n">ZMQ_EVENT_DISCONNECTED</span>:</div><div class='line' id='LC530'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_event_disconnected</span><span class="p">(</span><span class="o">*</span><span class="n">event</span><span class="p">,</span> <span class="n">address</span><span class="p">.</span><span class="n">c_str</span><span class="p">());</span></div><div class='line' id='LC531'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC532'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">default:</span></div><div class='line' id='LC533'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">on_event_unknown</span><span class="p">(</span><span class="o">*</span><span class="n">event</span><span class="p">,</span> <span class="n">address</span><span class="p">.</span><span class="n">c_str</span><span class="p">());</span></div><div class='line' id='LC534'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC535'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC536'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">zmq_msg_close</span> <span class="p">(</span><span class="o">&amp;</span><span class="n">eventMsg</span><span class="p">);</span></div><div class='line' id='LC537'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC538'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">zmq_close</span> <span class="p">(</span><span class="n">s</span><span class="p">);</span></div><div class='line' id='LC539'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">socketPtr</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC540'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC541'><br/></div><div class='line' id='LC542'><span class="cp">#ifdef ZMQ_EVENT_MONITOR_STOPPED</span></div><div class='line' id='LC543'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">abort</span><span class="p">()</span></div><div class='line' id='LC544'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC545'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">socketPtr</span><span class="p">)</span></div><div class='line' id='LC546'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">zmq_socket_monitor</span><span class="p">(</span><span class="n">socketPtr</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC547'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC548'><span class="cp">#endif</span></div><div class='line' id='LC549'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_monitor_started</span><span class="p">()</span> <span class="p">{}</span></div><div class='line' id='LC550'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_event_connected</span><span class="p">(</span><span class="k">const</span> <span class="kt">zmq_event_t</span> <span class="o">&amp;</span><span class="n">event_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">addr_</span><span class="p">)</span> <span class="p">{</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">event_</span><span class="p">;</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">addr_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC551'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_event_connect_delayed</span><span class="p">(</span><span class="k">const</span> <span class="kt">zmq_event_t</span> <span class="o">&amp;</span><span class="n">event_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">addr_</span><span class="p">)</span> <span class="p">{</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">event_</span><span class="p">;</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">addr_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC552'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_event_connect_retried</span><span class="p">(</span><span class="k">const</span> <span class="kt">zmq_event_t</span> <span class="o">&amp;</span><span class="n">event_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">addr_</span><span class="p">)</span> <span class="p">{</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">event_</span><span class="p">;</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">addr_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC553'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_event_listening</span><span class="p">(</span><span class="k">const</span> <span class="kt">zmq_event_t</span> <span class="o">&amp;</span><span class="n">event_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">addr_</span><span class="p">)</span> <span class="p">{</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">event_</span><span class="p">;</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">addr_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC554'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_event_bind_failed</span><span class="p">(</span><span class="k">const</span> <span class="kt">zmq_event_t</span> <span class="o">&amp;</span><span class="n">event_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">addr_</span><span class="p">)</span> <span class="p">{</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">event_</span><span class="p">;</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">addr_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC555'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_event_accepted</span><span class="p">(</span><span class="k">const</span> <span class="kt">zmq_event_t</span> <span class="o">&amp;</span><span class="n">event_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">addr_</span><span class="p">)</span> <span class="p">{</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">event_</span><span class="p">;</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">addr_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC556'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_event_accept_failed</span><span class="p">(</span><span class="k">const</span> <span class="kt">zmq_event_t</span> <span class="o">&amp;</span><span class="n">event_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">addr_</span><span class="p">)</span> <span class="p">{</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">event_</span><span class="p">;</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">addr_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC557'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_event_closed</span><span class="p">(</span><span class="k">const</span> <span class="kt">zmq_event_t</span> <span class="o">&amp;</span><span class="n">event_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">addr_</span><span class="p">)</span> <span class="p">{</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">event_</span><span class="p">;</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">addr_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC558'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_event_close_failed</span><span class="p">(</span><span class="k">const</span> <span class="kt">zmq_event_t</span> <span class="o">&amp;</span><span class="n">event_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">addr_</span><span class="p">)</span> <span class="p">{</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">event_</span><span class="p">;</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">addr_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC559'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_event_disconnected</span><span class="p">(</span><span class="k">const</span> <span class="kt">zmq_event_t</span> <span class="o">&amp;</span><span class="n">event_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">addr_</span><span class="p">)</span> <span class="p">{</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">event_</span><span class="p">;</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">addr_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC560'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">on_event_unknown</span><span class="p">(</span><span class="k">const</span> <span class="kt">zmq_event_t</span> <span class="o">&amp;</span><span class="n">event_</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">addr_</span><span class="p">)</span> <span class="p">{</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">event_</span><span class="p">;</span> <span class="p">(</span><span class="kt">void</span><span class="p">)</span><span class="n">addr_</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC561'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="nl">private:</span></div><div class='line' id='LC562'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span><span class="o">*</span> <span class="n">socketPtr</span><span class="p">;</span></div><div class='line' id='LC563'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC564'><span class="p">}</span></div><div class='line' id='LC565'><br/></div><div class='line' id='LC566'><span class="cp">#endif</span></div></pre></div>
            </td>
          </tr>
        </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2013 <span title="0.06119s from github-fe129-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/zeromq/cppzmq/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-remove-close close ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>

  </body>
</html>

