#pragma once
class SceneManager final {
private:
	SceneManager();
	~SceneManager();
public:
	SceneManager(const SceneManager& obj) = delete;
	SceneManager& operator=(const SceneManager& obj) = delete;

	static SceneManager* GetInstance();

	static void ChangeScene(int sceneNo);
};