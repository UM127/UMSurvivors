#pragma once
class Player;
class Enemy;
class Unit;
class BackGround;
class GameCamera;
class EnemySpawn;
class GameUI;

class Game : public IGameObject
{
public:
	/// <summary>
	/// 開始の処理
	/// </summary>
	/// <returns></returns>
	bool Start() override;
	/// <summary>
	/// 更新処理
	/// </summary>
	void Update() override;
	/// <summary>
	/// 描画処理
	/// </summary>
	/// <param name="rc"></param>
	void Render(RenderContext& rc) override;

private:
	BackGround* m_background;					    //背景。
	EnemySpawn* m_enemyspawn;
	GameUI* m_gameui;
	SpriteRender	m_spriteRender;
	FontRender      m_fontRender;					//フォントレンダー
	ModelRender     m_modelRender;					//モデルレンダー
	Player*        m_player;						//プレイヤー
	Enemy*			m_enemy;
	Unit*			m_unit=nullptr;							//ユニット	
	Vector3         m_pointligpos;                  //ポイントライトの座標
	Vector3         m_directionligColor={ 1.0f, 1.0f, 1.0f };		    //セットする色
	Vector3			m_spPosition;					//スポットライトのポジション
	Vector3			m_spDirection;                  //スポットライトの方向

	SpriteRender    m_spriteHP;					//HPばー
	//ここからは仮で追加したもの
private:
	void Try();

	int m_itemState = 0;

	int m_gage = 0;
	int m_gari = 0;
	int m_tea = 0;
	int m_syoyu = 0;
	int m_wasabi = 0;

	int m_hp=10;
	int m_Maxhp=10;


	GameCamera* m_gameCamera;
};

