# AizuKirara Library
## 幾何
- 直線の交差判定
- 線分の交差判定
- 平面走査
  - マンハッタン幾何
  - 任意線分
- 線分アレンジメント
- 円
  - 点と円の接線(tangentCP)
  - 共通接線(tangentCC)
  - 2円の共通面積(icpc2013autumn_h)
- 凸多角形  
  - ConvexCut
  - ConvexHull(Graham Scan)
- 単純多角形
  - 面積
  - 円と単純多角形との共通面積
  - 線分と多角形の包含判定
- 最小包含円
- 最小包含球
- 数値解析
  - シンプソン公式による積分(二次以下)
- 最近点対問題(分割統治)
- ボロノイ図
- N個の辺から四面体の体積の求値

## データ構造
- 平衡二分探索木
  - Treap: 軽い
  - RBST: 少し重い
- 遅延セグツリー
- LCA
- HL分解
- 転倒数(BIT)
- ノードに列をもつセグメント木
- マージテク

## 行列
- 行列累乗
- ガウスジョルダン

## 探索
- A*
- N-Queen(？)

## グラフ
- 二重辺連結成分分解
- 関節点、橋
- トポロジカルソート
- 閉路判定
- k最短路
- グラフ同型
- 長さkのパスの総数(行列積)
- 強連結成分分解
- 無向中国人郵便配達問題
- 最小シュタイナー木
- 2-SAT
- Welsh–Powell(彩色問題, 塗る色の数が最小になるとは限らない)
- 最大の閉路(DFS)
- Unicycle Graph
- 有向グラフの閉路判定(DFS)
- 最小有向全域木

## フロー
- 最大流(Dinic)
- 二部グラフの最大マッチング
- 最小費用流
- 「マッチング・辺カバー・安定集合・点カバー」の関係

## 木
- 木の同型判定
- LCA
- Euler Tour

## 数学
- 拡張ユークリッド互除法(extgcd)
- 区間エラトステネスの篩
- 最小二乗法(mod_pow)
- オイラー関数(m以下のmと互いに素な自然数の個数)
- 連立線形合同式(linear_congruence) yukicoderとか見ると良さげだった気がする
- 中国剰余定理(CRT) yukicoderとか見ると良さげだった気がする
- 逆元
- mod_fact, mod_revfact(階乗の逆元)
- mod_comb
- divisor(約数列挙)
- FFT
- Stern-Brocot Tree

## 文字列
- Trie木
- (Aho-Corasick)
- RollingHash
- 2D-RollingHash
- (SuffixArray)
- LCP
- 最長共通部分文字列(SuffixArray)
- 最長回文
- 構文解析（いらない？）
- (Manacher: 回文を探すアルゴリズム)

## DP
- ダブリング(個数制約付きナップザック)

## その他
- 正六面体(さいころ)
- 平均最大化
- MillerRabin素数判定法
- fairfield
- isleap
- zeller

## ~/.emacs.d/init.el
- flycheck(flymake)
- 括弧対応
- 行番号
- 初めの下側ウィンドウを消す
- Ctrl-Z, Ctrl-R (for uku)
