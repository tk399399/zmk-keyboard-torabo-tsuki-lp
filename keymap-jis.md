# Windows JIS input settings

このForkは、Windowsの「日本語キーボード（106/109キー）」で使う設定です。
ZMK Studioでは M Layout を選択してください。
Studioのキー名はUS配列のHID名なので、表示と入力される記号が異なる場合があります。
例: Keyboard Left Brace はJIS環境では @、Keyboard Right Brace は [ です。

## 親指キー

- 左親指のSpace: 短押しでSpace、長押しでレイヤー2。
- 左親指の最内側: 短押しで無変換、長押しで左Shift。
- 右親指の最内側: 短押しで変換、長押しで右Shift。
- 右親指の中央: 短押しでBackspace、長押しでレイヤー3。
- 右親指の外側: Enter。
- Pの右のBackspaceは維持。
- 左ホーム列先頭のCtrlはStudioの既存設定を維持。

無変換／変換をIMEのON/OFFに使う場合の動作は、Windows IME側のキー設定にも依存します。

## レイヤー2（左親指Spaceを長押し）

| 通常のキー | レイヤー2で入力 |
| --- | --- |
| Tab | 半角／全角 |
| Q W E R T | ! @ # $ % |
| Y U I O P | ^ & * ( ) |
| A S D F G | 1 2 3 4 5 |
| H J K L ; | { - = } : |
| Z X C V B | 6 7 8 9 0 |
| N M , . / | _ + [ ] バックスラッシュ |

## レイヤー3（右親指中央Backspaceを長押し）

既存のFキー、矢印、Home/End、接続切替を維持しています。
N M , . / の位置は、順にシングルクォート、ダブルクォート、バッククォート、チルダ、パイプです。

## レイヤー4（スクロール）

- 左親指列の左から2番目のキー（旧・重複していた左Ctrl）を押している間、レイヤー4になります。
- レイヤー4中は左右どちらのトラックボールもスクロールになります（手前に転がすと下へスクロール）。
- 内側のクリックキー（通常時の左クリック／右クリック位置）は中クリックになります。
- スクロール速度は `snippets/input-listener` と `snippets/input-split-listener` の `&zip_scroll_scaler 1 4` で調整します（分母を大きくすると遅くなる）。

## レイヤー5〜7

中身はすべて透過（&trans）の空きレイヤーです。ZMK Studioで自由に割り当ててください。

## ソースとStudioの関係

`config/jis.h`でJIS用HIDエイリアスを定義し、`config/keymap.keymap`で使用しています。
Studioで保存したキーマップは通常のファームウェア再書き込み後も優先されます。
ソースのキーマップへ戻す場合は、Studioの Restore Stock Settings を使用します。
この操作はStudioで行った独自編集も戻すため、必要な編集を確認してから行ってください。
