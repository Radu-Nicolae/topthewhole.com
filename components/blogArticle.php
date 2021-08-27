<?php

    echo "
    <article class='blog_item'>
    <div class='blog_item_img'>
        <a href='$file'>
            <img class='card-img rounded-0' src='$imageSource' alt='' />
        </a>
        <a href='$file' class='blog_item_date'>
            <h3>$day</h3>
            <p>$month</p>
        </a>
    </div>
    <div class='blog_details'>
        <a class='d-inline-block' href='$file'>
            <h2>$title</h2>
        </a>
        <a href='$file'>
            <p>
                $description
            </p>
        </a>

        <ul class='blog-info-link'>
            <li>
                <a href='$category.php'><i class='fa fa-user'></i>$category</a>
            </li>
        </ul>
    </div>
</article>
    "

?>
