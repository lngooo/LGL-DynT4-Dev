define dso_local i32 @GQO5(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %13
13:
  %14 = load i32, i32* %7
  %15 = icmp ne i32 %14, 3
  br i1 %15, label %16, label %70
16:
  %17 = load i32, i32* %7
  switch i32 %17, label %69 [
    i32 0, label %18
    i32 1, label %24
  ]
18:
  %19 = load i32, i32* %5
  %20 = load i32, i32* %4
  %21 = icmp slt i32 %19, %20
  %22 = zext i1 %21 to i64
  %23 = select i1 %21, i32 1, i32 3
  store i32 %23, i32* %7
  br label %69
24:
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %27
27:
  %28 = load i32, i32* %9
  %29 = load i32, i32* %6
  %30 = icmp slt i32 %28, %29
  br i1 %30, label %33, label %31
31:
  br label %50
33:
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %9
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  %44 = icmp eq i32 %38, %43
  br i1 %44, label %45, label %46
45:
  store i32 1, i32* %8
  br label %46
46:
  br label %47
47:
  %48 = load i32, i32* %9
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %9
  br label %27
50:
  %51 = load i32, i32* %8
  %52 = icmp ne i32 %51, 0
  br i1 %52, label %65, label %53
53:
  %54 = load i32*, i32** %3
  %55 = load i32, i32* %5
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  %58 = load i32, i32* %57
  %59 = load i32*, i32** %3
  %60 = load i32, i32* %6
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  store i32 %58, i32* %62
  %63 = load i32, i32* %6
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %6
  br label %65
65:
  %66 = load i32, i32* %5
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %5
  store i32 0, i32* %7
  br label %69
69:
  br label %13
70:
  %71 = load i32, i32* %6
  ret i32 %71
}
