define dso_local i32 @RemoveDuplicates(i32* %0, i32 %1) {
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
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = load i32, i32* %4
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %18, label %16
16:
  store i32 2, i32* %7
  br label %63
18:
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %21
21:
  %22 = load i32, i32* %9
  %23 = load i32, i32* %5
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %27, label %25
25:
  store i32 5, i32* %7
  br label %44
27:
  %28 = load i32*, i32** %3
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  %33 = load i32*, i32** %3
  %34 = load i32, i32* %9
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  %37 = load i32, i32* %36
  %38 = icmp eq i32 %32, %37
  br i1 %38, label %39, label %40
39:
  store i32 1, i32* %8
  br label %40
40:
  br label %41
41:
  %42 = load i32, i32* %9
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %9
  br label %21
44:
  %45 = load i32, i32* %8
  %46 = icmp ne i32 %45, 0
  br i1 %46, label %58, label %47
47:
  %48 = load i32*, i32** %3
  %49 = load i32, i32* %6
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32*, i32** %3
  %54 = load i32, i32* %5
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %5
  %56 = sext i32 %54 to i64
  %57 = getelementptr inbounds i32, i32* %53, i64 %56
  store i32 %52, i32* %57
  br label %58
58:
  br label %60
60:
  %61 = load i32, i32* %6
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %6
  br label %12
63:
  %64 = load i32, i32* %5
  store i32 1, i32* %7
  ret i32 %64
}
