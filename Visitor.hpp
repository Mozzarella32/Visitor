#pragma once

template<typename... Arg>
struct Visitor : public Arg...{
	using Arg::operator()...;
};

template<typename... Arg>
Visitor(Arg...) -> Visitor<Arg...>;
