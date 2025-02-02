= 定例会議の臨み方 - 巨大な縦割りプロジェクトの中で②

//flushright{
岡島一樹(@k-okajima)
//}

== バーンアップチャートでトレンドを把握すべし


フロントエンドチーム内の各チームはガントチャートを基準にチームの進捗を報告するのですが、前述した通り共通部品チームにはガントチャートはありません。そこでこのチームではリリースバーンアップチャートを作り、チームの状況を可視化できるようにしました。バックログの数は日々増えていくため、バーンダウンではなくバーンアップを選択しました。ではここで共通部品チームが直面した4つのトレンドについてご紹介します。

=== トレンド1：理想形


//image[burnup1][理想的なバーンアップチャート]

 * 青線がバックログの残ポイント数です。
 * オレンジ線がチームが消化したポイントの合計です。



これは理想的な状態のバーンアップですね。残ポイント、消化ポイントともに増えていっていますが、差が縮まってきています。残ポイントの増加は減らないにしても、チームの消化が追いついてくれば追加されたバックログも早く対応できそうですね。ゴールも近そうですので、進捗定例会では堂々と「問題ありません」と報告しましょう。

=== トレンド2：ワニの口


//image[burnup2][ワニの口状態のバーンアップチャート]


次に、こんなバーンアップではいかがでしょうか？これはかなり厳しいですね。増加分に対して消化が全く追いついておらず、逆に差が広がっています。通称「ワニの口」状態と呼んでいました。トレンドがこのような状態が続くのであれば何か対策を打たなければなりません。


まずチームで対策できそうなことを考えてみます。例えばバックログが増えている原因の究明は必須です。障害が原因であればなぜ障害が増えているのかの根本原因を話し合いましょう。エンハンス系のバックログであればある程度仕方ないものの、まだIssueとして起票されていないバックログはないか話し合ってみることも必要です。


次にベロシティを上げるためにできることはないか考えてみます。例えば必要性を感じない割に面倒な作業がもしあれば、タスクから思い切って除外してみるのも良いでしょう。メンバーのスキルが平準化されておらず一部のメンバーに負荷が偏っているような場合は、チーム内勉強会などでチーム力の底上げを図るのも良いでしょう。


それでも「ワニの口」が閉じなければチームだけではどうにもできません。マネージャーに相談しメンバーを追加するなどの対策が必要です。大事なのはこのトレンドが続くようであれば、進捗定例会では特大級のアラートを上げる必要があるということです。

=== トレンド3：平行線


//image[burnup3][平行線のバーンアップチャート]


ではこれはいかがでしょうか？うーむ。微妙ですね（笑）。良くもなっていないけど悪化もしていない。これをどう見るかはチームによるとは思いますが、私ならトレンド2と同じ対策は講じた方が良いかなと思います。マネージャーからすれば「いつ終わるのこれ？」ですからね。共通部品チームではこのパターンのトレンドが一番多かった気がします。大事なのはバーンアップチャートが常に最新化されていることです。現状が見える化できていればマネージャーも判断が可能です。開発者が足りなければ追加される可能性もありますし、現状で良しとする判断も可能性としてはあるでしょう。

=== トレンド4：隠れた危機


//image[burnup4][このバーンアップチャートは順調？]


最後に一見順調に見えるけど危険なトレンドを紹介します。進捗の見える化にバーンアップチャートを活用する場合、バーンアップチャートの残ポイント数を算出することは欠かせません。つまり起票されたIssueはすぐにポイント見積もりしてバーンアップチャートに反映する必要があります。仮に共通部品チームが日々の対応に追われ、起票されたIssueを放置していたらどうなっていたでしょうか？ポイントがつかないIssueが増え続けてしまい、どれぐらいの残作業があるのか誰も把握できなくなってしまいます。するとチャートはこんな感じになります。


一見すると順調そうに見えますね。しかしIssueの数は増えるけど青線が引けない事態になっています。実は共通部品チームも一度このような状況になりかけたときがあります。当時は週一回リファインメントをやっていましたが、週一回ではとてもバックログを捌ききれていませんでした。巨大システムが故に一つの共通部品の修正が数百画面にも影響を及ぼす恐れがあり、リファインメントに相当時間がかかってしまうのです。


そこで以下の図のようにリファインメントを週三回に増やして、仕様検討・見積もりの時間をより多く確保しました。こうすることでバックログを捌ける量が増え、起票されたIssueは即リファインメントして見積もれるようになりました。結果的に青線もしっかり引くことができました。残ポイントが全く増えないというのもこのチームにとっては危険な兆候なのです。


//image[event2][リファインメント回数を増やした時間割]

== 改めて思う進捗報告で大事なこと


私自身はウォーターフォールの経験がとても長いのですが、アジャイルであっても進捗の見える化はとても大事だなと改めて思いました。今回のこのチームであればバーンアップチャートを進捗の見える化のために上手に活用して、関係者間で認識の齟齬がないように工夫することで、より良いコミュニケーションを図ることが何よりも重要でした。プロジェクト全体ではガントチャートベースの報告をしているので報告内容に情報の欠落があってはいけませんし、もちろん嘘ついて良いように見せるのもいけません（笑）。



　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-k-okajima1/snake.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        岡島一樹@k-okajima\\
        https://www.agile-studio.jp/blog\\
        https://qiita.com/k-okajima
        \end{minipage}
    \hspace{1ex}
//}

現場リーダー兼エンジニア。2017年頃からモダンな開発スタイルに触れるようになり、2019年にLSMの資格を取得して以降、プロジェクトの進め方やカイゼンについて深く考えるようになりました。アジャイル・ウォーターフォールに関わらず、プロジェクトがより良くなるために何をすべきなのかを常に考えて行動し、得られた知見を発信しています。
