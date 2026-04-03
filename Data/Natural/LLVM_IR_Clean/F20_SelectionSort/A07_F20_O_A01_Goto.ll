define dso_local void @SelectionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  %16 = icmp sge i32 %13, %15
  br i1 %16, label %17, label %21
17:
  ret void
21:
  %22 = load i32, i32* %5
  store i32 %22, i32* %7
  %23 = load i32, i32* %5
  %24 = add nsw i32 %23, 1
  store i32 %24, i32* %6
  br label %25
25:
  %26 = load i32, i32* %6
  %27 = load i32, i32* %4
  %28 = icmp sge i32 %26, %27
  br i1 %28, label %29, label %30
29:
  br label %47
30:
  %31 = load i32*, i32** %3
  %32 = load i32, i32* %6
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = load i32*, i32** %3
  %37 = load i32, i32* %7
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  %41 = icmp slt i32 %35, %40
  br i1 %41, label %42, label %44
42:
  %43 = load i32, i32* %6
  store i32 %43, i32* %7
  br label %44
44:
  %45 = load i32, i32* %6
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %6
  br label %25
47:
  %49 = load i32*, i32** %3
  %50 = load i32, i32* %7
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  %53 = load i32, i32* %52
  store i32 %53, i32* %8
  %54 = load i32*, i32** %3
  %55 = load i32, i32* %5
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  %58 = load i32, i32* %57
  %59 = load i32*, i32** %3
  %60 = load i32, i32* %7
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  store i32 %58, i32* %62
  %63 = load i32, i32* %8
  %64 = load i32*, i32** %3
  %65 = load i32, i32* %5
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  store i32 %63, i32* %67
  %69 = load i32, i32* %5
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %5
  br label %12
}
