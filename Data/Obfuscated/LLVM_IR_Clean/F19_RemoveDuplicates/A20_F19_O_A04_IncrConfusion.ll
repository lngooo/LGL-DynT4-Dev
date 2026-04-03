define dso_local i32 @ytX(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32*
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %11 = load i32*, i32** %3
  store i32* %11, i32** %5
  %13 = load i32*, i32** %3
  store i32* %13, i32** %6
  store i32 -1, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = add nsw i32 %16, 1
  store i32 %17, i32* %7
  %18 = load i32, i32* %4
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %20, label %51
20:
  %22 = load i32*, i32** %3
  store i32* %22, i32** %8
  store i32 0, i32* %9
  br label %24
24:
  %25 = load i32*, i32** %8
  %26 = load i32*, i32** %6
  %27 = icmp ult i32* %25, %26
  br i1 %27, label %28, label %38
28:
  %29 = load i32*, i32** %8
  %30 = load i32, i32* %29
  %31 = load i32*, i32** %5
  %32 = load i32, i32* %31
  %33 = icmp eq i32 %30, %32
  br i1 %33, label %34, label %35
34:
  store i32 1, i32* %9
  br label %35
35:
  %36 = load i32*, i32** %8
  %37 = getelementptr inbounds i32, i32* %36, i32 1
  store i32* %37, i32** %8
  br label %24
38:
  %39 = load i32, i32* %9
  %40 = icmp ne i32 %39, 0
  br i1 %40, label %46, label %41
41:
  %42 = load i32*, i32** %5
  %43 = load i32, i32* %42
  %44 = load i32*, i32** %6
  %45 = getelementptr inbounds i32, i32* %44, i32 1
  store i32* %45, i32** %6
  store i32 %43, i32* %44
  br label %46
46:
  %47 = load i32*, i32** %5
  %48 = getelementptr inbounds i32, i32* %47, i32 1
  store i32* %48, i32** %5
  br label %15
51:
  %52 = load i32*, i32** %6
  %53 = load i32*, i32** %3
  %54 = ptrtoint i32* %52 to i64
  %55 = ptrtoint i32* %53 to i64
  %56 = sub i64 %54, %55
  %57 = sdiv exact i64 %56, 4
  %58 = trunc i64 %57 to i32
  ret i32 %58
}
