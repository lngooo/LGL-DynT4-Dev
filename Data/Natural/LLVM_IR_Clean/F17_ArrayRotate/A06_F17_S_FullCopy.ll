define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %10 = load i32, i32* %5
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  br label %72
13:
  %14 = load i32, i32* %6
  %15 = load i32, i32* %5
  %16 = srem i32 %14, %15
  store i32 %16, i32* %6
  %18 = load i32, i32* %5
  %19 = sext i32 %18 to i64
  %20 = mul i64 %19, 4
  %21 = call noalias i8* @malloc(i64 %20)
  store i32* %22, i32** %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %5
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  br label %47
30:
  %31 = load i32*, i32** %4
  %32 = load i32, i32* %8
  %33 = load i32, i32* %6
  %34 = add nsw i32 %32, %33
  %35 = load i32, i32* %5
  %36 = srem i32 %34, %35
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %31, i64 %37
  %39 = load i32, i32* %38
  %40 = load i32*, i32** %7
  %41 = load i32, i32* %8
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %40, i64 %42
  store i32 %39, i32* %43
  br label %44
44:
  %45 = load i32, i32* %8
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %8
  br label %24
47:
  store i32 0, i32* %9
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = load i32, i32* %5
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %55, label %53
53:
  br label %68
55:
  %56 = load i32*, i32** %7
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = load i32*, i32** %4
  %62 = load i32, i32* %9
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %61, i64 %63
  store i32 %60, i32* %64
  br label %65
65:
  %66 = load i32, i32* %9
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %9
  br label %49
68:
  %69 = load i32*, i32** %7
  call void @free(i8* %70)
  br label %72
72:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
