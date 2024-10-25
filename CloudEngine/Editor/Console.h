#pragma once
#include <QPlainTextEdit>
#include <QDockWidget>
#include <Tools/Logs/LogLevel.h>

namespace QtEditor
{
	class Console : public QDockWidget
	{
		Q_OBJECT

	public:
		explicit Console(QWidget *parent = nullptr);
		void focusInEvent(QFocusEvent* event) override;

		void Print(const std::string& p_message, const char* p_function, const char* p_file, int p_line, Debug::LogLevel p_level);

	private:
		QTextEdit *m_textEdit;
	};
}
