#pragma once

// ==============================
// 定数定義
// ==============================
// ステージ情報
const int STAGE_WIDTH  = 11;
const int STAGE_HEIGHT = 13;

// マップチップの縦横サイズ
#define CHIP_SIZE_WIDTH		32
#define CHIP_SIZE_HEIGHT	32

// ウィンドウサイズ
#define WINDOW_W	(STAGE_WIDTH * CHIP_SIZE_WIDTH)
#define WINDOW_H	(STAGE_HEIGHT * CHIP_SIZE_HEIGHT)

//	※※ 定義を作る
// オブジェクト種類
#define OBJ_GROUND			//	0	地面
#define OBJ_WALL			//	1	壁
#define PLAYER_START_POS	//	2	プレイヤーの初期位置
#define CRATE_POS			//	3	クレート配置場所
#define UNASSIGN_CRATE1		//	4	未配置のクレート
#define UNASSIGN_CRATE2	
#define UNASSIGN_CRATE3	
#define ASSIGN_CRATE		//	7	配置済みのクレート
//			(配置場所'3'+未配置クレート'4' = 7）

// プレイヤーの向き
#define DIR_UP		0
#define DIR_DOWN	1
#define DIR_LEFT	2
#define DIR_RIGHT	3
#define DIR_MAX		4

// プレイヤーの１方向に対する画像枚数
#define DIR_IMAGE_MAX	3

// プレイヤーの歩行パターン数
#define PLAYER_ANIME_MAX	4
// 歩行の画像更新間隔
#define ANIME_SPAN			8

// クレート画像の種類（画像表示に使う）
// ※定義を作る
#define NUMBER_OF_CRATE_TYPES	3		//クレートの種類数
#define MOVING_CRATE					//動かすクレート
#define TARGET_LOCATION					//目標の場所に表示するクレート
#define SUCCESSFUL_TARGET_LOCATION		//目標の場所に動かすクレートが設置されたときのクレート
