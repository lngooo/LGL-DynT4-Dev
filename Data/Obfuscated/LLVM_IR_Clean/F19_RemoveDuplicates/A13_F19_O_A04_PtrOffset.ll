define dso_local i32 @Ymwk(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %11 = load i32*, i32** %3
  store i32* %11, i32** %5
  store i32 0, i32* %6
  br label %13
13:
  %14 = load i32, i32* %6
  %15 = load i32, i32* %4
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %19, label %17
17:
  store i32 2, i32* %7
  br label %68
19:
  store i32 1, i32* %8
  store i32 0, i32* %9
  br label %22
22:
  %23 = load i32, i32* %9
  %24 = load i32*, i32** %5
  %25 = load i32*, i32** %3
  %26 = ptrtoint i32* %24 to i64
  %27 = ptrtoint i32* %25 to i64
  %28 = sub i64 %26, %27
  %29 = sdiv exact i64 %28, 4
  %30 = trunc i64 %29 to i32
  %31 = icmp slt i32 %23, %30
  br i1 %31, label %34, label %32
32:
  store i32 5, i32* %7
  br label %51
34:
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %9
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  %40 = load i32*, i32** %3
  %41 = load i32, i32* %6
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %40, i64 %42
  %44 = load i32, i32* %43
  %45 = icmp eq i32 %39, %44
  br i1 %45, label %46, label %47
46:
  store i32 0, i32* %8
  br label %47
47:
  br label %48
48:
  %49 = load i32, i32* %9
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %9
  br label %22
51:
  %52 = load i32, i32* %8
  %53 = icmp ne i32 %52, 0
  br i1 %53, label %54, label %63
54:
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %6
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  %59 = load i32, i32* %58
  %60 = load i32*, i32** %5
  store i32 %59, i32* %60
  %61 = load i32*, i32** %5
  %62 = getelementptr inbounds i32, i32* %61, i32 1
  store i32* %62, i32** %5
  br label %63
63:
  br label %65
65:
  %66 = load i32, i32* %6
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %6
  br label %13
68:
  %69 = load i32*, i32** %5
  %70 = load i32*, i32** %3
  %71 = ptrtoint i32* %69 to i64
  %72 = ptrtoint i32* %70 to i64
  %73 = sub i64 %71, %72
  %74 = sdiv exact i64 %73, 4
  %75 = trunc i64 %74 to i32
  store i32 1, i32* %7
  ret i32 %75
}
