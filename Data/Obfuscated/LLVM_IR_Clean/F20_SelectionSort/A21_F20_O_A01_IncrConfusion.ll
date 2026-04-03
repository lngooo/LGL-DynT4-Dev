define dso_local void @GeKQ7(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 -1, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = add nsw i32 %11, 1
  store i32 %12, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %15, label %64
15:
  %17 = load i32, i32* %5
  store i32 %17, i32* %6
  %19 = load i32, i32* %5
  store i32 %19, i32* %7
  br label %20
20:
  %21 = load i32, i32* %7
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %7
  %23 = load i32, i32* %4
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %25, label %40
25:
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %7
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  %31 = load i32*, i32** %3
  %32 = load i32, i32* %6
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = icmp slt i32 %30, %35
  br i1 %36, label %37, label %39
37:
  %38 = load i32, i32* %7
  store i32 %38, i32* %6
  br label %39
39:
  br label %20
40:
  %42 = load i32*, i32** %3
  %43 = load i32, i32* %5
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %42, i64 %44
  %46 = load i32, i32* %45
  store i32 %46, i32* %8
  %47 = load i32*, i32** %3
  %48 = load i32, i32* %6
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %47, i64 %49
  %51 = load i32, i32* %50
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %5
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  store i32 %51, i32* %55
  %56 = load i32, i32* %8
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %6
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  store i32 %56, i32* %60
  br label %10
64:
  ret void
}
