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
  br i1 %15, label %16, label %60
16:
  %18 = load i32*, i32** %3
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  %22 = load i32, i32* %21
  store i32 %22, i32* %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %25
25:
  %26 = load i32, i32* %9
  %27 = load i32, i32* %5
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %31, label %29
29:
  br label %44
31:
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %9
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  %36 = load i32, i32* %35
  %37 = load i32, i32* %7
  %38 = icmp eq i32 %36, %37
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
  br label %25
44:
  %45 = load i32, i32* %8
  %46 = icmp ne i32 %45, 0
  br i1 %46, label %55, label %47
47:
  %48 = load i32, i32* %7
  %49 = load i32*, i32** %3
  %50 = load i32, i32* %5
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  store i32 %48, i32* %52
  %53 = load i32, i32* %5
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %5
  br label %55
55:
  %56 = load i32, i32* %6
  %57 = add nsw i32 %56, 1
  store i32 %57, i32* %6
  br label %12
60:
  %61 = load i32, i32* %5
  ret i32 %61
}
